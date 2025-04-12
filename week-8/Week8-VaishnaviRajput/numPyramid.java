import java.util.Scanner;

public class numPyramid {
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the height of the pattern pyramid\n When n=");
        int input=sc.nextInt();

        for(int i=1;i<=input;i++){
            for(int j=0;j<input-i;j++){
                System.out.print("   ");
            }
            for(int k=i;k>=1;k--){
                System.out.printf("%3d",k);
            }
            for(int r=2;r<=i;r++){
                System.out.printf("%3d",r);
            }
            System.out.println();
        }
        sc.close();
    }
}
