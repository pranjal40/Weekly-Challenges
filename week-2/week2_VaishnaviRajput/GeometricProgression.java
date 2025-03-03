import java.util.Scanner;
import java.lang.Math;

public class GeometricProgression {

  static int GP_term(int a, int r, int n) {
    int a_n = a * (int) Math.pow(r, (n - 1));
    return a_n;
  }

  static int SumOfGP(int a, int r, int n) {
    int sum = 0;
    if (r > 1) {
      sum = (a * ((int) Math.pow(r, n) - 1)) / (r - 1);
    } else if (r < 1) {
      sum = (a * (1 - (int) Math.pow(r, n))) / (1 - r);
    }
    return sum;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the first term:");
    int a = sc.nextInt();
    System.out.print("Enter the common ratio:");
    int r = sc.nextInt();
    System.out.print("Enter the number of term to be printed:");
    int n = sc.nextInt();
    System.out.print("Enter the number of term to be summed up:");
    int n1 = sc.nextInt();
    System.out.print("GP:");
    int[] GP = new int[n];
    for (int i = 0; i < n; i++) {
      GP[i] = GP_term(a, r, i + 1);
      System.out.print(GP[i] + ",");
    }
    System.out.println("....\n");
    System.out.println("Sum upto nth term:" + SumOfGP(a, r, n1));
    sc.close();
  }
}
