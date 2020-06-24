import java.util.*;

public class Task08 {
	public static String convertMillis(long millis){
		long totalSecond = millis/1000;
		long currentSecond = totalSecond%60;
		long totalMinute = totalSecond/60;
		long currentMinute = totalMinute%60;
		long totalHour = totalMinute/60;
		return totalHour+":"+currentMinute+":"+currentSecond;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		long currentTime = System.currentTimeMillis();
		System.out.println(convertMillis(currentTime));
	}

}
