import java.util.Scanner;

public class charString {
    //program to add character at desired position in string
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a string :");
        String input=sc.nextLine();//string input
        System.out.print("Enter a special character to be added:");
        String addChar=sc.next();//character to be added
        System.out.print("Enter position in the string:");
        int position=0;
        if(sc.hasNextInt()){//to make sure integer position entered not in word
         position=sc.nextInt();
        }
        else{
          System.out.println("only integer position is accepted");
          return;
        }

        if(position>input.length()+1){//to check that user enter position only within string length
          System.out.println("Invalid position! Character can only be added in string not outside it.");
          sc.close();
          return;
        }

        StringBuilder output=new StringBuilder();

        if(position==input.length()+1){//condition when character to be added just at end of string 
          for(int i=0;i<input.length();i++){
            output.append(input.charAt(i)); 
          }
          output.append(addChar.charAt(0));
        }
        else{
        char latter=input.charAt(position);
      char presentChar= input.charAt(position-1);

      if(Character.isAlphabetic(presentChar)){//to check if the position is in between word or not
        System.out.println("Insertion of special character is not allowed in between the letters of a word");
        sc.close();     
        return; 
    }
      else{
        for(int i=0;i<input.length();i++){
            output.append(input.charAt(i)); //storing input to output string in which required changes needs to be done
        }
        
        output.replace(position-1,position,addChar);//replacing given character with already existing one
        if(addChar.equals(".") || addChar.equals("!")){//condition to capitalize letter in required case
            latter=(char)(latter-32);
            output.setCharAt(position,latter);
        }

        output.insert(position,' ');//insertion of whitespace after character
      }
    }
      
      System.out.println("Output:");
      System.out.println(output);//required  output
      sc.close();
}
}