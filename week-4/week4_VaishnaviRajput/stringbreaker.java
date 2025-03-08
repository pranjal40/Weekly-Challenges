import java.util.Scanner;

public class stringbreaker {

    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter a string:");
        String input=sc.nextLine();

        for(int i=0;i<input.length();i++){
            if( input.charAt(i)=='.'||input.charAt(i)==':'||input.charAt(i)==';'
            ||input.charAt(i)==','||input.charAt(i)=='/'||input.charAt(i)=='?'||
            input.charAt(i)=='-'||input.charAt(i)=='&'||input.charAt(i)=='!'||input.charAt(i)=='@'
            ||input.charAt(i)=='#'||input.charAt(i)=='$'||input.charAt(i)=='%'||input.charAt(i)=='^'
            ||input.charAt(i)=='*'||input.charAt(i)=='_'||input.charAt(i)=='+'||input.charAt(i)=='='
            ||input.charAt(i)=='('||input.charAt(i)==')'||input.charAt(i)=='['||input.charAt(i)==']'){
                continue;
            }
            if(input.charAt(i)==' '){
                System.out.println();
                continue;
            }
            System.out.print(input.charAt(i));
        }
        sc.close();
    }
    
}
