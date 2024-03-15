package studyjava03;

public class StartJava02_Solve2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int f = 5;
		for(int i = 1; i<=f; i++)
		{
			for(int j = f; j>i; j--)
				System.out.print(" ");
			for(int j = 0; j<i*2-1; j++)
				System.out.print("*");
			System.out.println();//줄 띄우기
		}
		for(int i = 1; i<f; i++)
		{
			for(int j = 0; j<i;j++)
				System.out.print(" ");
			for(int j =(f-i)*2-1; j>0; j--)
				System.out.print("*");
			System.out.println();
			
		}
		

	}

}
