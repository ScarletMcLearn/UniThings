
public class testStock {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Stock myStock = new Stock("ORCL", "Oracle Corporation");
		myStock.previousClosingPrice = 34.5;
		myStock.currentPrice = 34.35;
		System.out.println("The changed price is: " + myStock.getChangePercent());
		

	}

}
