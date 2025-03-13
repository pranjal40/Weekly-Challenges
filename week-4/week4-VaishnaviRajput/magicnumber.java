import java.util.Scanner;


public class magicnumber {
    static int check(int input){
        int temp=input;
        int digit;
        int sum=0;
        while(temp!=0){
            digit=temp%10;
            sum+=digit;
            temp/=10;
       }
       if((sum>=2 && sum<=9)|| sum==0){
        return 0;
       
    }
    else  if(sum==1){
        return 1;
      
    }
       return check(sum);
    }
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a number:");
        int input=sc.nextInt();

        if(check(input)==1){
            System.out.println(input+"  is a magic number.");
        }
        if(check(input)==0){
            System.out.print(input+" is not a magic number.");
        }

       
        sc.close();
    }
}
