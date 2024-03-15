using Oracle.ManagedDataAccess.Client;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace OracleTest
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        //NUGET에서 ORACLE 검색해서 추가함
        const string ORADB = "Data Source=(DESCRIPTION=(ADDRESS_LIST=" +
            "(ADDRESS=(PROTOCOL=TCP)(HOST=localhost)(PORT=1521)))" +
            "(CONNECT_DATA=(SERVER=DEDICATED)(SERVICE_NAME=XE)));" +
            "User Id=c##scott;Password=tiger;";

        OracleCommand cmd = new OracleCommand();
        protected static DataSet ds;
        protected static OracleConnection OraConn = new OracleConnection();

        public void ConnectDB()
        {
            try
            {
                OraConn = new OracleConnection(ORADB);
                OraConn.Open();
                cmd = new OracleCommand();
            }
            catch (Exception ex)
            {
                //showDBError(e);
            }
        }



        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                ConnectDB();

                string sql = "SELECT * FROM orderTBL";
                OracleDataAdapter oda = new OracleDataAdapter();
                oda.SelectCommand = new OracleCommand();
                oda.SelectCommand.Connection = OraConn;
                oda.SelectCommand.CommandText = sql;
                ds = new DataSet();
                oda.Fill(ds, "orderTBL");

                OraConn.Close();

                dataGridView1.Rows.Clear();

                foreach (DataRow item in ds.Tables[0].Rows)
                {
                    dataGridView1.Rows.Add(item["orderid"].ToString(), item["userid"].ToString(), item["clothid"].ToString(), 
                        item["count"].ToString(), item["price"].ToString());
                }

            }
            catch (Exception ex)
            {
                //showDBError(e);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {

            if (textBox1.Text == "" || textBox2.Text == "" || textBox3.Text == "" || textBox4.Text == "" || textBox5.Text == "")
                return;

            try
            {
                ConnectDB();
                cmd.Connection = OraConn;
                cmd.CommandText = $"INSERT INTO orderTBL VALUES ('{textBox1.Text}','{textBox2.Text}','{textBox3.Text}',{textBox4.Text},{textBox5.Text})";
                cmd.ExecuteNonQuery();
                OraConn.Close();
            }
            catch (Exception ex)
            {
                //showDBError(e);
            }
        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
