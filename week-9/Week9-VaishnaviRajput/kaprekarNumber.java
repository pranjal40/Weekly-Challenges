import java.util.Scanner;
import java.lang.Math;

public class kaprekarNumber {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number:");
        int input = 0;
        if (sc.hasNextInt()) {
            input = sc.nextInt();
        } else {
            System.out.println("Invalid Input!!!");
        }

        int sqr = input * input;
        int i = 0, k = sqr;
        int sqr1 = 0, sqr2 = 0;
        while (k > 0) {
            k /= 10;
            i += 1;
        }

        if (i % 2 == 0) {
            sqr1 = (int) (sqr / Math.pow(10, i / 2));
            sqr2 = (int) (sqr % Math.pow(10, i / 2));
        } else {
            sqr1 = (int) (sqr / Math.pow(10, i / 2 + 1));
            sqr2 = (int) (sqr % Math.pow(10, i / 2));
        }

        System.out.println(i);
        System.out.printf("%d squared = %d =>%d and %d\n%d+%d=%d", input, sqr, sqr1, sqr2, sqr1, sqr2, sqr1 + sqr2);
        if (sqr1 + sqr2 == input) {
            System.out.println("\nOutput:\n" + input + " is a kaprekar number.");
        } else {
            System.out.println("\nOutput:\n" + input + " is not a kaprekar number.");
        }
        sc.close();
    }
}
