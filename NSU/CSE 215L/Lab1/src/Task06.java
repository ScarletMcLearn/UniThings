import java.util.Scanner;


public class Task06 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter the subtotal and a gratuity rate : ");
		double s = scan.nextDouble();
		double gr = scan.nextDouble();
		double g = gr/100*s;
		double t = s+g;
		System.out.println("The graituity is $"+g+" and total is $"+t);
	}

}
