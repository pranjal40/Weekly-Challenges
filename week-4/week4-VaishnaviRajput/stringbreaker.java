import java.util.Scanner;

public class stringbreaker {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string:");
        String input = sc.nextLine();

        boolean isspecial = false;
        boolean nextline = false;
        String specialChar = "',./#@!?<>:;^%{}|=+-_()&$*[]\" ";

        for (int i = 0; i < input.length(); i++) {
            isspecial = false;

            for (int j = 0; j < specialChar.length(); j++) {
                if (input.charAt(i) == specialChar.charAt(j)) {
                    isspecial = true;
                    break;

                }
            }
            if (isspecial) {
                if (!nextline) {
                    System.out.println();
                    nextline = true;
                }
            } else {
                System.out.print(input.charAt(i));
                nextline = false;
            }
        }

        sc.close();
    }

}