using System;
using System.IO;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.Diagnostics;
using System.Runtime.InteropServices;
using System.Threading;
using VB_Auth;

namespace Callisto_Loader
{
    public partial class CTLoad : Form
    {
        static BackgroundWorker loginWorker;

        public CTLoad()
        {
            InitializeComponent();
        }

        void injectDLL()
        {
            // Get Engine.exe's Process Identification #
            try
            {
                int PID1 = System.Diagnostics.Process.GetProcessesByName("MapleStory")[0].Id;
            }
            catch
            {
                MessageBox.Show("MapleStory isn't running; let me start that for you!", "Hey, how's it going?", MessageBoxButtons.OK, MessageBoxIcon.Information);
                Process maPle = new Process();
                maPle.StartInfo.FileName = dirBox.Text + "GameLauncher.exe";
                maPle.Start();
                Thread.Sleep(5000);
            }
            int PID = System.Diagnostics.Process.GetProcessesByName("MapleStory")[0].Id;
            pid.Text = Convert.ToString(PID);
            // Write injector to Nexon dir

            File.WriteAllBytes(dirBox.Text + "DLLInjector.exe", Properties.Resources.DLLInjector);
            File.WriteAllBytes(dirBox.Text + "CallistoTrainer.dll", Properties.Resources.CallistoTrainer);
            File.WriteAllBytes(dirBox.Text + "TabControlEX.dll", Properties.Resources.TabControlEX);

            Process jecTor = new Process();
            jecTor.StartInfo.FileName = dirBox.Text + "DLLInjector.exe";
            jecTor.StartInfo.Arguments = "\"" + dirBox.Text + "CallistoTrainer.dll" + "\" " + pid.Text;
            jecTor.StartInfo.WindowStyle = System.Diagnostics.ProcessWindowStyle.Hidden;

            jecTor.Start();
            Thread.Sleep(10);

            File.Delete(dirBox.Text + "DLLInjector.exe");
            File.Delete(dirBox.Text + "CallistoTrainer.dll");
            File.Delete(dirBox.Text + "TabControlEX.dll");

            Application.Exit();

        }

        private void loginBT_Click(object sender, EventArgs e)
        {
            loginWorker = new BackgroundWorker();
            loginWorker.DoWork += verifyLogin;


            loginWorker.RunWorkerAsync();
        }

        public void verifyLogin(object sender, DoWorkEventArgs e)
        {
            string user = username.Text;
            string pass = password.Text;

            bool authpositive = vbAuth.doLogin(user, pass);
            if (authpositive == true) // BEFORE RELEASE AUTHPOSITIVE == TRUE
            {
                //this.loadSpin.Visibility = Visibility.Hidden;
                MessageBox.Show("Login successful - loading up CT now!");
                injectDLL();
            }
            else
            {
                MessageBox.Show("Login failed? Not a part of SNS? Join today at http://snsgaming.com!");
            }

        }

        private void navBT_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog dialog = new FolderBrowserDialog();
            dialog.ShowDialog();
            dirBox.Text = dialog.SelectedPath + "\\";

        }
    }
}
