import java.util.Scanner;

public class z3{
		public static void main(String[] args) {
			int n;
			for (int i=0;i<args.length;i++)
			{
				try { n=Integer.parseInt(args[i]); }
				catch (NumberFormatException ex) {
					System.out.println(args[i] + " nie jest liczba calkowita");
					continue;
				}
				System.out.println(div(n));
				}
			}
		public static int div(int n){
			int dzielnik=n-1;;
			
		
			for (int i=dzielnik;i>0;i--)
			{
				if(n%i==0)
				return i;
			}
		return 1;
	}
}

