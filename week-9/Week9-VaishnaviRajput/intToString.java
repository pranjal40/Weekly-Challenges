import java.util.Scanner;

public class intToString {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number(should be less than ten thousand):");
        int input = 0;

        if (sc.hasNextInt()) {
            input = sc.nextInt();
        } else {
            System.out.println("Invalid Input!!");
            sc.close();
            return;
        }

        int num = input;
        int i = 0;
        if (num == 0) {
            System.out.println("Zero");
        }

        String[] ones = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven",
                "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" };
        String[] tens = { "", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety" };

        System.out.println("\nOutput:");
        while (num > 0) {
            if (num <= 10000 && num >= 1000) {
                i = num / 1000;
                System.out.print(ones[i] + " thousand ");
                num %= 1000;
            } else if (num < 1000 && num >= 100) {
                i = num / 100;
                System.out.print(ones[i] + " hundred ");
                num %= 100;
            } else if (num < 100 && num >= 20) {
                i = num / 10;
                System.out.print(tens[i] + " ");
                num %= 10;
            } else if (num < 20) {
                System.out.print(ones[num]);
                num /= 100;
            } else {
                System.out.println("Input Out Of Range!!");
                sc.close();
                return;
            }

        }
        System.out.println();

        sc.close();
    }
}