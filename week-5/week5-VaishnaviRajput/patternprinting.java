import java.util.Scanner;

public class patternprinting{

    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the desired height of pyramid:");

        if(sc.hasNextInt()){
            int input=sc.nextInt();
            if(input<0){
                System.out.println("negative value are not accepted");
            }
        for(int i=1;i<input;i++){
            for(int j=1;j<(input-i);j++){
                System.out.print(" ");
            }
            for(int k=0;k<(2*i-1);k++){
                System.out.print("#");
            }
            System.out.println();
        }
    }
    else{
        System.out.println("Only Integer value ");
    }
   
        sc.close();
    }
}