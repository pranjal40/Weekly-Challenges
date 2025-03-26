import java.util.Scanner;

public class specialNumber {

    static int factorial(int n){
        if(n==1 ||n==0){
            return 1;
        }
        return n*factorial(n-1);
    }

     public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter a number:");
        int input= sc.nextInt();

        int sum1=0;
        int temp=input;
        
        if(input>=0){
        while(temp!=0){
            int n=temp%10;
            sum1+=factorial(n);
            temp/=10;
        }
        
        if (sum1==input){
            System.out.println(input+" is a special number.");
        }
        else{
            System.out.println(input+" is not a special number.");
        }
    }
    else{
        System.out.println("!! Only Positive Integer is Accepted as input !!");
    }

    sc.close();
}
}