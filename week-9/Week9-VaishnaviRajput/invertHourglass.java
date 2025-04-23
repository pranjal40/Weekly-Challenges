import java.util.Scanner;

public class invertHourglass {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the desired height of hourglass(only between 3 and 99):");
        int height = 0;
        if (sc.hasNextInt()) {
            height = sc.nextInt();
            if (height < 3 || height > 99) {
                System.out.println("Out of Range Input !!!!");
                sc.close();
                return;
            }
            if (height % 2 == 0) {
                System.out.println("Invalid Height!!! Even values not supported.");
                sc.close();
                return;
            }
        } else {
            System.out.println("Invalid Input!!!");
            sc.close();
            return;
        }

        System.out.println("\nOutput:");

        for (int i = 0; i < height / 2 + 1; i++) {
            for (int j = 0; j <= i; j++) {
                System.out.print("*");
            }
            for (int k = 0; k <= 2 * (height / 2) - 1 - 2 * i; k++) {
                System.out.print(" ");
            }
            for (int j = 0; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        for (int i = 0; i < height / 2; i++) {
            for (int j = 0; j < height / 2 - i; j++) {
                System.out.print("*");
            }
            for (int k = 0; k <= 2 * i + 1; k++) {
                System.out.print(" ");
            }
            for (int j = 0; j < height / 2 - i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}