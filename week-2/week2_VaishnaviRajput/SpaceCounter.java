import java.util.Scanner;

public class SpaceCounter {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter  a string:");// takes input
    String input = sc.nextLine();

    int count = input.length();// to get length of string

    int i = 0;// initialization of loop
    int space = 0;
    while (i < count) {
      if (input.charAt(i) == ' ')// loop to check each character in string for spaces
      {
        space += 1;// to store the count of spaces
      }
      i++;
    }

    System.out.printf("Number of spaces in the string : %d", space);// output
    sc.close();
  }
}
