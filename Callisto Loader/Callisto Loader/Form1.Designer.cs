namespace Callisto_Loader
{
    partial class CTLoad
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.username = new System.Windows.Forms.TextBox();
            this.password = new System.Windows.Forms.MaskedTextBox();
            this.loginBT = new System.Windows.Forms.Button();
            this.label2 = new System.Windows.Forms.Label();
            this.pid = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.dirBox = new System.Windows.Forms.TextBox();
            this.navBT = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.White;
            this.label1.Location = new System.Drawing.Point(76, 122);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(286, 20);
            this.label1.TabIndex = 0;
            this.label1.Text = "Hello, please authenticate to SNS:";
            // 
            // username
            // 
            this.username.BackColor = System.Drawing.Color.Gainsboro;
            this.username.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.username.Location = new System.Drawing.Point(152, 163);
            this.username.Name = "username";
            this.username.Size = new System.Drawing.Size(134, 20);
            this.username.TabIndex = 1;
            // 
            // password
            // 
            this.password.BackColor = System.Drawing.Color.Gainsboro;
            this.password.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.password.Location = new System.Drawing.Point(152, 189);
            this.password.Name = "password";
            this.password.PasswordChar = '*';
            this.password.Size = new System.Drawing.Size(134, 20);
            this.password.TabIndex = 2;
            // 
            // loginBT
            // 
            this.loginBT.Location = new System.Drawing.Point(152, 240);
            this.loginBT.Name = "loginBT";
            this.loginBT.Size = new System.Drawing.Size(134, 23);
            this.loginBT.TabIndex = 3;
            this.loginBT.Text = "Go for it!";
            this.loginBT.UseVisualStyleBackColor = true;
            this.loginBT.Click += new System.EventHandler(this.loginBT_Click);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.BackColor = System.Drawing.Color.Transparent;
            this.label2.ForeColor = System.Drawing.Color.White;
            this.label2.Location = new System.Drawing.Point(24, 265);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(84, 13);
            this.label2.TabIndex = 4;
            this.label2.Text = "MapleStory PID:";
            // 
            // pid
            // 
            this.pid.AutoSize = true;
            this.pid.BackColor = System.Drawing.Color.Transparent;
            this.pid.ForeColor = System.Drawing.Color.White;
            this.pid.Location = new System.Drawing.Point(109, 265);
            this.pid.Name = "pid";
            this.pid.Size = new System.Drawing.Size(0, 13);
            this.pid.TabIndex = 5;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.BackColor = System.Drawing.Color.Transparent;
            this.label3.ForeColor = System.Drawing.Color.White;
            this.label3.Location = new System.Drawing.Point(12, 315);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(108, 13);
            this.label3.TabIndex = 6;
            this.label3.Text = "MapleStory Directory:";
            // 
            // dirBox
            // 
            this.dirBox.BackColor = System.Drawing.Color.Black;
            this.dirBox.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.dirBox.ForeColor = System.Drawing.Color.White;
            this.dirBox.Location = new System.Drawing.Point(126, 311);
            this.dirBox.Name = "dirBox";
            this.dirBox.Size = new System.Drawing.Size(262, 20);
            this.dirBox.TabIndex = 7;
            this.dirBox.Text = "C:\\Nexon\\MapleStory\\";
            // 
            // navBT
            // 
            this.navBT.Location = new System.Drawing.Point(394, 311);
            this.navBT.Name = "navBT";
            this.navBT.Size = new System.Drawing.Size(32, 20);
            this.navBT.TabIndex = 8;
            this.navBT.Text = "...";
            this.navBT.UseVisualStyleBackColor = true;
            this.navBT.Click += new System.EventHandler(this.navBT_Click);
            // 
            // CTLoad
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Black;
            this.BackgroundImage = global::Callisto_Loader.Properties.Resources.loader;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.ClientSize = new System.Drawing.Size(438, 336);
            this.Controls.Add(this.navBT);
            this.Controls.Add(this.dirBox);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.pid);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.loginBT);
            this.Controls.Add(this.password);
            this.Controls.Add(this.username);
            this.Controls.Add(this.label1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedToolWindow;
            this.Name = "CTLoad";
            this.Opacity = 0.9;
            this.ShowIcon = false;
            this.Text = "Callisto Trainer [GMS v95.3]";
            this.TopMost = true;
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox username;
        private System.Windows.Forms.MaskedTextBox password;
        private System.Windows.Forms.Button loginBT;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label pid;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox dirBox;
        private System.Windows.Forms.Button navBT;
    }
}

