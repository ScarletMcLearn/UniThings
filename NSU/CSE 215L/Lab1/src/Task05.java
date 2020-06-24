import java.util.Scanner;


public class Task05 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter a degree in celcius : ");
		double c = scan.nextDouble();
		double f = (9.0/5)*c+32;
		System.out.println((int)c+" Celsius is "+f+" Farhenheit");
	}

}
