import java.util.Scanner;

public class numberPyramid{

    static void Number(int n){
              
        //return 0;
    }

    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the desired height of pyramid:");
        int input=sc.nextInt();

        int k=1;
        int n=1;
        for(int i=1;i<=input;i++){
            for(int j=0;j<input-i;j++){
                System.out.print("   ");
           
            }
            while(k<=(i*i)){
                System.out.printf("%-3d",n);
                n+=1;
                k++;
            }
            System.out.println();
          
    }
 
        sc.close();
    }
}