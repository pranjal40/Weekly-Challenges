import java.util.Scanner;

public class numPyramid {
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the height of the pattern pyramid\n When n=");
        int input=sc.nextInt();

        for(int i=1;i<=input;i++){
            for(int j=0;j<input-i;j++){
                System.out.print("   ");//spaces pattern
            }
            for(int k=i;k>=1;k--){
                System.out.printf("%3d",k);//decreasing number pattern of half pyramid
            }
            for(int r=2;r<=i;r++){
                System.out.printf("%3d",r);//increasing number pattern for other half triangle
            }
            System.out.println();
        }
        sc.close();
    }
}
