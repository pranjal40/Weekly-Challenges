import java.util.Scanner;

public class arraySorting{

    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Input:");//taking input
        String input=sc.nextLine();

        int n=input.length();
        int []output=new int[n];//number array to perform sorting operation

        for(int i=1;i<input.length();i+=2){//loop to selectout only integer part form input
            if(Character.isDigit(input.charAt(i))){
            output[i]=Integer.parseInt(String.valueOf(input.charAt(i)));//storing integerr value to array
            }
            else{
                System.out.println("Invalid input !! Not a integer");
                sc.close();
                return;
            }
        }

        n=output.length;
        for(int i=0;i<n;i++){//sorting number array in ascending order
            for(int j=0;j<i;j++){
                if(output[j]>output[j+1]){
                    int temp=output[j+1];
                    output[j+1]=output[j];
                    output[j]=temp;
                }
            }
        }
        
        StringBuilder out=new StringBuilder();//stores output in required format
        for(int i=0;i<n;i++){
            if(i==0){
                out.append('[');
            }
            if(output[i]!=0){
            out.append(output[i]);
            if(i==n-1){
                out.append(']');
                break;
            }
            out.append(',');
        }
    }

     System.out.println("Output:"+out);//output
        
   sc.close();
    }
}