import java.util.Scanner;


public class Task07 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter the amount of water in kilograms : ");
		double m = scan.nextDouble();
		System.out.print("Enter the initial temperature : ");
		double t1 = scan.nextDouble();
		System.out.print("Enter the final temperature : ");
		double t2 = scan.nextDouble();
		double q = m*(t2 - t1)*4184;
		System.out.println("The energy needed is "+q);
	}

}
