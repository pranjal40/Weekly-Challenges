import java.util.Scanner;

public class containerAmount{

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Input: height = ");
        String input=sc.nextLine();//input string format

        input=input.replaceAll("[^0-9]","");//removing all characters other than digits
        int[] height=new int[input.length()];//array to perform numeric operation
        for(int i=0;i<input.length();i++){
            if(Character.isDigit(input.charAt(i))){//check to see that only digits to appended in array
            height[i]=Integer.parseInt(String.valueOf(input.charAt(i)));
            }
            else{
                System.out.println("Invalid input!!!\n Input can only be of format [1,2,3,...]");
                sc.close();
                return;
            }
        }

        int n=height.length;
        int max_amount=0;
        for(int i=0;i<=n/2;i++){
            int min=0;
            for(int j=i+1;j<n;j++){
                if(height[i]>height[j]){
                    min=height[j];
                }
                else{
                    min=height[i];
                }
              int  amount_water=min*(j-i);// calculate water amount between wall
              if(amount_water>max_amount){//check to update the max amount 
                max_amount=amount_water;
              }
            }
        }

        System.out.println("Output:-\nThe maximum amount of water container holds:"+max_amount);
        sc.close();
    }
}