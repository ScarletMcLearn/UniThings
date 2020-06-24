
public class Fan {
	final int SLOW=1, MEDIUM=2, FAST=3;
	private int speed = SLOW;
	private boolean on = false;
	private double radius = 5;
	String color = "blue";
	public String getColor(){
		return this.color;
	}
	public void setColor(String color){
		this.color = color;
	}
	public int getSpeed(){
		return this.speed;
	}
	public void setSpeed(int speed){
		this.speed = speed;
	}
	public boolean getOn(){
		return this.on;
	}
	public void setOn(boolean on){
		this.on = on;
	}
	public double getRadius(){
		return this.radius;
	}
	public void setRadius(double radius){
		this.radius = radius;
	}
	public String toString(){
		if(this.on){
			String text = "Speed="+this.speed+",color="+this.color+",radius="+this.radius;
			return text;
		}
		return "color="+this.color+",radius="+this.radius+"and fan is off";
		
	}
	
}
