import java.util.Scanner;

public class Task04 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int[] myList = new int[50];
		int count =0;
		int n =2;
		while(true){
			if(count==50){break;}
			int flag = 0;
			for(int i =2 ; i<=Math.sqrt(n); i++){
				if(n%i == 0){flag =1;break;}
			}
			if(flag==0){ 
				myList[count] = n;
				count++;
			}
			n++;
		}
		for(int value : myList)	
			System.out.print(value+" ");

	}

}
