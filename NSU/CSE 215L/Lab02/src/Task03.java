import java.util.Scanner;

public class Task03 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		System.out.print("Enter today's day : ");
		int a = in.nextInt();
		System.out.print("Enter the number of days elapsed since today : ");
		int b = in.nextInt();
		int c = (a+b)%6;
		if(a==0){
			System.out.print("Today is Sunday and the future day is ");
		}else if(a==1){
			System.out.print("Today is Monday and the future day is ");
		}else if(a==2){
			System.out.print("Today is Tuesday and the future day is ");
		}else if(a==3){
			System.out.print("Today is Wednesday and the future day is ");
		}else if(a==4){
			System.out.print("Today is Thursday and the future day is ");
		}else if(a==5){
			System.out.print("Today is Friday and the future day is ");
		}else if(a==6){
			System.out.print("Today is Saturday and the future day is ");
		}
		if(c==0){
			System.out.print("Sunday");
		}else if(c==1){
			System.out.print("Monday");
		}else if(c==2){
			System.out.print("Tuesday");
		}else if(c==3){
			System.out.print("Wednesday");
		}else if(c==4){
			System.out.print("Thursday");
		}else if(c==5){
			System.out.print("Friday");
		}else if(c==6){
			System.out.print("Saturday");
		}
	}

}
