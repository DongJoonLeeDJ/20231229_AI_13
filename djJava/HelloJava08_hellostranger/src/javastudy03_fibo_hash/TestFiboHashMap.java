package javastudy03_fibo_hash;

import java.util.HashMap;

public class TestFiboHashMap {
	
	static long f(int n)
	{
		if(n<=0)
			return 0;
		if(n<=2)
			return 1;
		return f(n-2)+f(n-1);
	}
	static HashMap<Integer, Long> memo = new HashMap<Integer, Long>();

	static Long fibo(Integer num)
	{
		if(num<=0)
			return 0L;
		if(num<=2)
			return 1L;
		if(memo.containsKey(num)) {
			return memo.get(num);
		} else {
			memo.put(num, fibo(num-2)+fibo(num-1));
			return memo.get(num);
		}
	}
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(fibo(43));
		System.out.println(f(43));
	}
	

}
