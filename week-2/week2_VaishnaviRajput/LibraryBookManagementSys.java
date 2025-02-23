import java.util.Scanner;

public class LibraryBookManagementSys {

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the number of days after the due date:");
    int days = sc.nextInt();

    float penalty = 0;
    if (days <= 7) {
      int fine = 5 * days;
      System.out.println("Fine to be paid: Rs." + fine);
    } else {
      int fine = 10 * days;
      if (fine > 100) {
        penalty = (fine + fine / 10);
      } else {
        penalty = fine;
      }
      System.out.println("Fine before penalty:Rs." + fine + "\nFinal Fine after 10% penalty:Rs." + penalty);
    }
    sc.close();
  }
}
