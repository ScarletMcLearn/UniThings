import java.util.Scanner;

public class Task04 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int temp, n, r, sum = 0;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter a three-digit integer : ");
		n= in.nextInt();
		temp=n;    
		while(n>0){    
		   r=n%10;   
		   sum=(sum*10)+r;    
		   n=n/10;    
		}    
		if(temp==sum){
			System.out.println(temp + " is a palindrome");
		}else{
			System.out.println(temp + " is not a palindrome");
		}
	}

}
