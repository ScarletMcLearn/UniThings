
public class Stock {
	
	String symbol;
	String name;
	double previousClosingPrice;
	double currentPrice;
	
	Stock(String newSymbol, String newName){
		symbol = newSymbol;
		name = newName;
		previousClosingPrice = 1.0;
		currentPrice = 1.0;
	}
	
	double getChangePercent(){
		return (previousClosingPrice-currentPrice)/previousClosingPrice*100;
	}

}
