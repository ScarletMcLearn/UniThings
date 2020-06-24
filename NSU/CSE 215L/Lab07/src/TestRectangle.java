
public class TestRectangle {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Rectangle r1 = new Rectangle(4,40);
		Rectangle r2 = new Rectangle(3.5,35.9);
		System.out.println("the first rectangle's width, height, area and perimeters are in serially:");
		System.out.println(r1.width+","+r1.height+","+r1.getArea()+","+r1.getPerimeter());
		System.out.println("the second rectangle's width, height, area and perimeters are in serially:");
		System.out.println(r2.width+","+r2.height+","+r2.getArea()+","+r2.getPerimeter());
	}

}
