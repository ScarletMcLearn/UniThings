import java.util.Scanner;

public class Task07 {
	public static boolean isSorted(int[] array){
		int temp = -1;
		for(int i: array){
			if(i<temp){return false;}
			temp = i;
		}
		return true;
	}
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		System.out.print("Enter list: ");
		int n = input.nextInt();
		int[] myList = new int[n];
		for(int i=0; i<n; i++)
			myList[i] = input.nextInt();
		if(isSorted(myList)){
			System.out.println("The list is sorted");
		}else{
			System.out.println("The list is not sorted");
		}

	}

}
