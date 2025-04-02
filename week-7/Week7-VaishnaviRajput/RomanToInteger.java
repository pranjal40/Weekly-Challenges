import java.util.Scanner;
import java.util.HashMap;

public class RomanToInteger {
    static boolean IsValidRoman(String n){//method to check if valid roman is entered
        String Roman="^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$"; //pattern for valid roman
        return n.matches(Roman);
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number in Roman System:");
        String input = sc.next().toUpperCase();

        HashMap<Character, Integer> roman = new HashMap<>();
        //mapping specified characters of roman number system to their integer value
        roman.put('I', 1);
        roman.put('V', 5);
        roman.put('X', 10);
        roman.put('L', 50);
        roman.put('C', 100);
        roman.put('D', 500);
        roman.put('M', 1000);

        if(!IsValidRoman(input)){
            System.out.println("Invalid Roman Number!!!");
            return;
        }

        int output = 0;

        for (int i = 0; i < input.length(); i++) {//letter by letter conversion
            char letter = input.charAt(i);
            char nextletter=letter;
            if(i+1!=input.length()){
             nextletter = input.charAt(i+1);
            }
            
            if (!roman.containsKey(letter)&&!roman.containsKey(nextletter)) {//check if entered roman number consist of valid letter or not
                System.out.println("Invalid Input!!");
                return;
            }
            int present = roman.get(letter);
            int next = 0;
            if (i + 1 != input.length()) {//to prevent last place issue for next letter
                next = roman.get(nextletter);
            }
            if (next > present) {//final number output
                output -= present;
            } else {
                output += present;
            }
        }
        System.out.println("\nOutput:\n" + input + " = " + output);
        sc.close();

    }
}
