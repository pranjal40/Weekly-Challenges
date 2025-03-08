import java.util.Scanner;

public class stringconversion{

    static void Upper(String n){
       System.out.print("String in UPPER case:");
        for(int i=0;i<n.length();i++){
            char upper=n.charAt(i);
            if(n.charAt(i)>='a' && n.charAt(i)<='z'){
               upper=(char)(n.charAt(i)-32);
            }
            System.out.print(upper);
        }
       
    }

    static void Lower(String n){
        System.out.print("String in lower case:");
        for(int i=0;i<n.length();i++){
            char lower=n.charAt(i);
            if(n.charAt(i)>='A' && n.charAt(i)<='Z'){
               lower=(char)(n.charAt(i)+32);
              
            }
            System.out.print(lower);
        }
        
    }

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a string:");
        String  input= sc.nextLine();
        System.out.print("Enter desired case(U or L):");
        String condition = sc.nextLine();

        if(condition.equalsIgnoreCase("u") ){
             Upper(input);
        }
        
        else if(condition.equalsIgnoreCase("l") ){
            Lower(input);
        }
        else{
            System.out.println("Invalid  choice is entered.");
        }

        sc.close();
    }
}
