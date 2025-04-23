import java.util.Scanner;

public class doubleSort {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("For nXn size of double dimensional array(DDA)\nEnter n = ");
        int n = 0;
        if (sc.hasNextInt()) {
            n = sc.nextInt();
        } else {
            System.out.println("Invalid Input!! n should be in integer form.");
            sc.close();
            return;
        }

        int k = 0;
        System.out.println("Enter the DDA:");
        int[] input = new int[n * n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (sc.hasNextInt()) {
                    input[k] = sc.nextInt();// needs to enter one complete row at a time
                    k += 1;
                } else {
                    System.out.println("Invalid Input!!");
                    sc.close();
                    return;
                }
            }
        }

        int[] output = input;
        for (int i = 0; i < output.length; i++) {
            for (int j = 0; j < output.length - 1; j++) {
                if (output[j] > output[j + 1]) {
                    int temp = output[j];
                    output[j] = output[j + 1];
                    output[j + 1] = temp;
                }
            }
        }

        System.out.println("\nOutput:");
        for (int i = 0; i < output.length; i++) {
            System.out.printf("%4d", output[i]);
            if ((i + 1) % n == 0) {
                System.out.println();
            }
        }
        sc.close();
    }
}
