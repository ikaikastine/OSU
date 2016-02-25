import java.util.Scanner;

public class intFun {
	public static void main(String[] args) {
		int x;
		Scanner input = new Scanner(System.in);

		System.out.println("How big is the array?: ");
		x = input.nextInt();
		System.out.println(x);

		int[] intArray = new int[x];

		for (int i = 0; i < intArray.length; i++) {
			intArray[i] = i;
		}

		for (int i = 0; i<intArray.length; i++) {
			System.out.println(intArray[i]);
		}
	}
}
