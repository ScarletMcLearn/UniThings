
public class Task01 {
	public static int getPentagonalNumber(int n) {
		return (n * (3 * n - 1)) / 2;
	}                    
	
	public static void main(String[] args) {
		int NUMBER_OF_PENTAGONALS = 100;  

		System.out.println("The first 100 pentagonal numbers, ten per line: ");
		for (int i = 1; i <= NUMBER_OF_PENTAGONALS; i++) {
			if (i % 10 == 0) 
				System.out.printf("%7d\n", getPentagonalNumber(i));
			else
				System.out.printf("%7d", getPentagonalNumber(i));
		}
	}

	

}
