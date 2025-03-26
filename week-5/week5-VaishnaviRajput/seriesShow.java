import java.util.Scanner;
import java.lang.Math;

public class seriesShow {

    static void Series(int n){
        for(int i=0;i<n;i++){
            int sign= (int)Math.pow(-1,i);//to assign sign of series terms
            int numb=(2+3*i)*sign;//numerator of series terms
            int demo=7+4*i;//denominator of series terms
            if(sign!=-1 && i!=0){
                System.out.print("+");
            }
            System.out.print(numb+"/"+demo);
        }
      
    }
     public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter number of terms:");

        if(sc.hasNextInt()){
            int terms=sc.nextInt();
        System.out.print("S = ");
        Series(terms);
        }
        else{
            System.out.println("!!Invalid input given!!");
        }

    sc.close();
}
}
