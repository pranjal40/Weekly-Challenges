import java.util.Scanner;

public class halfpyramid {

    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the desired height:");
        int input=sc.nextInt();

       
        for(int i=0;i<input;i++){
            for(int j=0;j<(input-i);j++){
                System.out.print(" ");
            }
            for(int k=0;k<=i;k++){
                System.out.print("*");
            }
            System.out.println();
        }
sc.close();
    }   
}
