import java.util.Scanner;

public class Task01 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		System.out.print("ENter an integer, the input values : ");
		int pc=0, nc=0, c=0; double sum=0;
		while(true){
			int a = in.nextInt();
			if(a==0){break;}
			else{
				c++;
				sum+=a;
				if(a>0){pc++;}
				if(a<0){nc++;}
			}
		}
		System.out.println("The number of positives are "+pc);
		System.out.println("The number of negatives are "+nc);
		System.out.println("The total is "+sum);
		System.out.println("The average is "+(sum/c));

	}

}
