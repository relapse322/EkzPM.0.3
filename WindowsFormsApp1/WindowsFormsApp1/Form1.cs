using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

       // public class Town
      //  {
       //     string NameTown;
       //     int kolvo;
        //    int S;


      //  }

        private void button2_Click(object sender, EventArgs e)
        {
            char NameTown;
            char kolvo;
            char S;
            textBox1.Text = NameTown;
            char[] characters = new char[] { NameTown, kolvo, S };
        }
    }
}
