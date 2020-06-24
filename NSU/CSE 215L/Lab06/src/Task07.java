import java.util.Scanner;


public class Task07 {
	public static double[][] getMatrix() {
		Scanner input = new Scanner(System.in);
		double[][] m = new double[3][3];
		System.out.println("Enter a 3-by-3 matrix row by row:");
		for (int i = 0; i < m.length; i++) {
			for (int j = 0; j < m[i].length; j++) {
				m[i][j] = input.nextDouble();
			}
		}
		return m;
	}

	public static boolean isMarkovMatrix(double[][] m) {
		return isElementsPositive(m) && isEachColumnSum1(m);
	}


	public static boolean isElementsPositive(double[][] m) {
		for (int i = 0; i < m.length; i++) {
			for (int j = 0; j < m[i].length; j++) {
				if (m[i][j] < 0)
					return false;
			}
		}
		return true;
	}

	public static boolean isEachColumnSum1(double[][] m) {
		for (int col = 0; col < m.length; col++) {
			double sum = 0; // Sum of each column
			for (int row = 0; row < m.length; row++) {
				sum += m[row][col];
			}
			if (sum != 1)
				return false;
		}
		return true;
	}
	
	public static void main(String[] args) {
		double[][] matrix = getMatrix();
		System.out.println("It is" + (isMarkovMatrix(matrix) ? " " : " not ") +
			"a Markov matrix");
	}
}
