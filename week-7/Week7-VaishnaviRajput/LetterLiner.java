import java.util.Scanner;

public class LetterLiner {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a word:");
        String input = sc.next();// input word

        char[] temp = new char[input.length()];// temperory array to store all character of input word
        String  rep="No repeated letter are present.";  
        for (int i = 0; i < input.length(); i++) {// main loop to store input into output variable
           char letter = input.charAt(i);

           if(!Character.isAlphabetic(letter)){
           System.out.println("Invalid input!! Words with special character not allowed");
           return;
           }
            if (letter >= 'A' && letter <= 'Z') {
                letter = (char) (letter + 32);
            }
            temp[i] = letter;// if no repetition of letter occur
            for (int j = 0; j < temp.length; j++) {// loop to check repetition of any letter
                if (temp[i] == temp[j] && i != j) {
                    rep="Repeated letters are present.";
                    for (int k = 0; k < temp.length; k++) {// if repetation then conversion to uppercase
                        if (temp[k] >= 'a' && temp[k] <= 'z') {
                            temp[k] = (char) (temp[k] - 32);
                        }
                    }
                    break;
                }
               
            }
        }
        // sorting the word
        for(int j=0;j<temp.length-1;j++){
        for (int i = 0; i < temp.length-j-1; i++) {
            if (temp[i] > temp[i + 1]) {
                char point = temp[i];
                temp[i] = temp[i + 1];
                temp[i + 1] = point;
            }
        }
    }

        String output = new String(temp);

        System.out.println("Output:\n" + output);
        System.out.println(rep);

        sc.close();
    }
}