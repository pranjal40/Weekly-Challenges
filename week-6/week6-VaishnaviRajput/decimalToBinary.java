import java.util.Scanner;

public class decimalToBinary {

    static int Binary(int n){
        int num=0;
        int i=0;
        while(n!=0){
        int temp=n%2;
        num=num*10+temp;
        n/=2;
        i+=1;
    }
    int reverse_num=0;
    while(i!=0){
        int temp=num%10;
        reverse_num=reverse_num*10+temp;
        num/=10;
        i--;
    }
        return reverse_num;
    }
    
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number:");
        int input=sc.nextInt();

        int binaryNumber=Binary(input);
        System.out.println("Binary equivalent of "+input+" is "+binaryNumber+".");

        sc.close();
}
}