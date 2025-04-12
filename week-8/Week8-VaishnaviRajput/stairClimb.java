import java.util.Scanner;

public class stairClimb {

    static int ways(int n){
        if(n==0 ||n==1){
            return 1;
        }
        return ways(n-1)+ways(n-2);
    }
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Input:\nThe nth stair:-");
        int input=sc.nextInt();

        int output=ways(input);
        System.out.println("Output:\nThe number of ways to reach "+input+"th stair:"+output);
        sc.close();
    }
}
