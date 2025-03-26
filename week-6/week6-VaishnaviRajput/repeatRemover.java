import java.util.Scanner;

public class repeatRemover {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string:");
        String input = sc.nextLine();
        System.out.print("Enter the desired case(U or L):");
        String strCase = sc.next();

        boolean[] usedChar = new boolean[256];
        StringBuilder output = new StringBuilder();

        for (int i = 0; i < input.length(); i++) {
            char letter = input.charAt(i);
            if (strCase.equalsIgnoreCase("u")) {
                    if(letter >= 'a' && letter <= 'z') {
                    letter = (char) (letter - 32);
                   }  
                }
             else if (strCase.equalsIgnoreCase("l")) {
                if (letter >= 'A' && letter <= 'Z') {
                    letter = (char) (letter + 32);      
            }
            }
             else {
                System.out.println("Invalid case type given!!!");
                sc.close();
                return;
            }
            if(Character.isAlphabetic(letter) && !usedChar[letter]){
              usedChar[letter]=true;
              output.append(letter);
              usedChar[32]=false;
            }
           else if(!usedChar[letter]){
            if(letter==' '){
                usedChar[letter]=true;
            }
                output.append(letter);
               
            }
            

        }
        System.out.println("Output:");
        System.out.println(output);
        sc.close();

    }
}
