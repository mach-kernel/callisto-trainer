using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Net;
using System.IO;
using System.ComponentModel;
using System.Windows;

namespace VB_Auth
{
    class vbAuth
    {

        public static bool doLogin(string username, string password)
        {
            HttpWebRequest req = (HttpWebRequest)WebRequest.Create("http://www.snsgaming.com/forum/login.php?do=login");
            string values = "vb_login_username=" + username + "&vb_login_password=" + password
                                + "&securitytoken=guest&"
                                + "cookieuser=checked&"
                                + "do=login";

            req.Method = "POST";
            req.ContentType = "application/x-www-form-urlencoded";
            req.ContentLength = values.Length;
            byte[] byteArray = Encoding.UTF8.GetBytes(values);
            CookieContainer a = new CookieContainer();
            req.CookieContainer = a;
            ServicePointManager.Expect100Continue = false; // prevents 417 error
            Stream dataStream = req.GetRequestStream();
            dataStream.Write(byteArray, 0, byteArray.Length);
            HttpWebResponse response = (HttpWebResponse)req.GetResponse();
            dataStream = response.GetResponseStream();
            StreamReader reader = new StreamReader(dataStream);
            string responseFromServer = reader.ReadToEnd();
            reader.Close();
            dataStream.Close();
            response.Close();
            bool activated;
            if (!responseFromServer.Contains("You have entered an invalid username or password") && !responseFromServer.Contains("Quota"))
            {
                activated = true;
            }
            else
            {
                activated = false;
            }

            return activated;
        }
    }
}
