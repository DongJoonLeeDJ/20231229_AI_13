using System;
using System.Collections.Generic;
using System.Data;
using System.Data.SqlClient;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MyParkingManagerDB
{
    public class DBHelper
    {
        private static SqlConnection conn = new SqlConnection();
        public static SqlDataAdapter da;
        public static DataSet ds;
        public static DataTable dt;
        private static string TABLENAME = " parkingManager ";

        //연결하고 CRUD 하고 해당 연결 끊는 것 = DB 작업
        private static void connectDB() //DBHelper 안에서만 사용할 메서드
        {
            string dataSource = "local";
            string db = "ParkingDB";
            string security = "SSPI";

            conn.ConnectionString = $"Data Source=({dataSource}); " +
                $"initial Catalog={db}; " +
                $"integrated Security = {security};" +
                $"Timeout=3";
            conn = new SqlConnection(conn.ConnectionString);
            conn.Open();

        }

        //selectQuery() -> ps 값은 자동으로 -1 대입이 됨
        //selectQuery(10) -> ps 값은 10으로 대입이 됨
        public static void selectQuery(int ps=-1)//매개변수의 기본 값을 대입문으로 지정 가능
        {
            try
            {
                connectDB();
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;
                if (ps == -1) //전체조회
                    cmd.CommandText = "select * from " + TABLENAME;
                else //부분조회, 해당 구역에 이미 차가 있는 지 여부 등 체크
                    cmd.CommandText = "select * from " + TABLENAME + " where parkingSpot=" + ps;
                da = new SqlDataAdapter(cmd);
                ds = new DataSet();
                da.Fill(ds, TABLENAME);
                dt = ds.Tables[0]; //select 결과물 저장된 테이블 하나를 가져올 것
            }
            catch(Exception ex) 
            {
                DataManager.printLog("select" + ex.StackTrace);
            }
            finally
            {
                conn.Close();
            }
        }
        //주차,출차
        public static void updateQuery(string pst, string cnum, string dname,
            string pnum, bool isRemove)
        {
            try
            {
                connectDB();
                SqlCommand cmd = new SqlCommand();
                cmd.Connection = conn;
                string sqlcommand = "";
                if(isRemove) //출차
                {
                    sqlcommand = 
                        "update "+TABLENAME+" set carnumber=''," +
                        "drivername='',phonenumber='',parkingtime=null where " +
                        "parkingspot=@p1";
                    //java의 preparestatement방식처럼 sql injection 방지하는 방식
                    cmd.Parameters.AddWithValue("@p1", pst);
                }
                else //주차
                {
                    sqlcommand =
                        "update " + TABLENAME + " set carnumber=@p1," +
                        "drivername=@p2,phonenumber=@p3, parkingtime=@p4 where " +
                        "parkingspot=@p5";
                    cmd.Parameters.AddWithValue("@p1", cnum);
                    cmd.Parameters.AddWithValue("@p2", dname);
                    cmd.Parameters.AddWithValue("@p3", pnum);
                    cmd.Parameters.AddWithValue("@p4", DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss.fff"));
                    cmd.Parameters.AddWithValue("@p5", pst);
                    //cmd.Parameters.AddWithValue("@p4", DateTime.Now.ToString
                    //    ("yyyy-MM-dd HH:mm:ss.fff"));

                }

                cmd.CommandText = sqlcommand;
                cmd.ExecuteNonQuery();
            }
            catch (Exception ex)
            {
                DataManager.printLog("update" + ex.StackTrace);
            }
            finally 
            {
                conn.Close();
            
            }

        }

        private static void executeQuery(string ps, string cmd)
        {
            string sqlcmd = "";
            if (cmd.Equals("insert"))
                sqlcmd = "insert into " + TABLENAME + "(parkingspot) values (@p1)";
            else
                sqlcmd = "delete from " + TABLENAME + " where parkingspot=@p1";
            try
            {
                connectDB();
                SqlCommand command = new SqlCommand();
                command.Connection = conn;
                command.Parameters.AddWithValue("@p1", ps);
                command.CommandText = sqlcmd;
                command.ExecuteNonQuery();
            }
            catch (Exception ex) 
            {
                DataManager.printLog(cmd + ex.StackTrace);
            }
            finally
            {
                conn.Close();
            }
        }

        public static void deleteQuery(string ps)
        {
            executeQuery(ps, "delete");
        }
        public static void insertQuery(string ps)
        {
            executeQuery(ps, "insert");
        }
        
    }
}
