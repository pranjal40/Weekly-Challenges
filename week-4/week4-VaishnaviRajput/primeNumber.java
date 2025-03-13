import java.util.Scanner;

public class primeNumber {

    static void Prime(int start,int last){
       
        for(int i=start;i<=last;i++){
            if(i==0||i==1){
                continue;
            }
            int istrue=1;
            for(int check=2;check<=(i/2);check++){
                if(i%check==0){
                    istrue=0;
                    break;
                }
            }  
            if(istrue!=0){
            System.out.println(i);
            } 
        }
           
        }
    

    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the lower bounding number:");
        int start=sc.nextInt();
        System.out.print("Enter the upper bounding number:");
        int last=sc.nextInt();
        
       System.out.printf("Prime numbers between %d and %d are:\n",start,last);
       Prime(start,last);

        sc.close();
    }
    
}
