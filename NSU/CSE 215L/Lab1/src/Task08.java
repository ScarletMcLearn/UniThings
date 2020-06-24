import java.util.Scanner;


public class Task08 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter speed and accelaration : ");
		double v = scan.nextDouble();
		double a =scan.nextDouble();
		double l = v*v/(2*a);
		System.out.printf("The miimimum runaway length for this airplane is %.3f",l);
	}

}
