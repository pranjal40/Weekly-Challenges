import java.util.Scanner;

public class HourglassPattern {
    
    public static void main(String[] args){

        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the desired height of hourglass:");
        
        if(sc.hasNextInt()){//for integer height of hourglass
           int input=sc.nextInt();

           if(input%2!=0){//to only accept odd heigth value
            int row=0;//for proper spacing in lower triangle
           System.out.println("\nOutput:");

           for(int i=0;i<input/2+1;i++){//upper inverted triangle pattern loop
               for(int j=0;j<i;j++){
                   System.out.print(" ");
               }
               for(int k=0;k<input-2*i;k++){
                   System.out.print("#");
               }
               row+=1;//number of rows printed in upper triangle
               System.out.println();
           }
           for(int i=1;i<=input/2;i++){//lower triangle pattern
            for(int j=1;j<row-i;j++){
                System.out.print(" ");
            }
            for(int k=0;k<2*i+1;k++){
                System.out.print("#");
            }
            System.out.println();
           }
        }
        else{
            System.out.println("Even height is not valid.\nHeight need only to be odd.");
        }
        }
        else{
            System.out.println("Invalid Input!!!");
        }

      sc.close();
    }
}
