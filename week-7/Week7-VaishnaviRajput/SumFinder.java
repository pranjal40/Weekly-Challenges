import java.util.Scanner;

public class SumFinder {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter an array of five numbers:\n");
        int[] input = new int[5];

        for (int i = 0; i < 5; i++) {// to take inpur in array
            if (sc.hasNextInt()) {// only to accept integer values
                input[i] = sc.nextInt();
                for (int j = 0; j < i; j++) {// To check that no number is repeated in array
                    if (input[i] == input[j]) {
                        System.out.println("No two reapeated number are allowed in array.");
                        return;
                    }
                }
            } else {
                System.out.println("Invalid input!!! Only integer values are permitted");
                return;
            }
        }

        System.out.print("Enter the number for which the sum to be found:");
        int sum = sc.nextInt();//input sum number
        int num1 = 0;
        int num2 = 0;
        int count = 0;

        for (int i = 0; i < 5; i++) {
            for (int j = i + 1; j < 5; j++) {
                if (sum == (input[i] + input[j])) {//to find sum number equivalent for array
                    num1 = input[i];
                    num2 = input[j];
                    count += 1;//counter on number of sum pairs
                }
            }
        }

        if (num1 > num2) {//sorting numbers
            int k = num1;
            num1 = num2;
            num2 = k;
        }

        if (count > 1) {//to tell if multiple pairs exist for sum
            System.out.println("Invalid input!! For sum number multiple pairs enterd");
            return;
        }

        if (count == 0) {//to tell no pair exists for sum
            System.out.println("Invalid input!! For sum number no pairs enterd");
            return;
        }

        System.out.printf("\nOutput:\n%d,%d\n", num1, num2);

        sc.close();
    }
}