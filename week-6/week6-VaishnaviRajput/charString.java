import java.util.Scanner;

public class charString {
    
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a string :");
        String input=sc.nextLine();
        System.out.print("Enter a special character to be added:");
        String addChar=sc.next();
        System.out.print("Enter position in the string:");
        int position=sc.nextInt();

        StringBuilder output=new StringBuilder();
        char latter=input.charAt(position+1);
      char presentChar= input.charAt(position);
      if(Character.isAlphabetic(presentChar)){
        System.out.println("Insertion of special character is not allowed in between the letters of a word");
        sc.close();     
        return; 
    }
      else{
        for(int i=0;i<input.length();i++){
            output.append(input.charAt(i)); 
        }
        if(addChar.equals(".") || addChar.equals("!")){
            latter=(char)(latter-32);
            output.setCharAt(position+1,latter);
        }
        output.replace(position,position+1,addChar);
        output.insert(position+1,' ');
      }
      System.out.println("Output:");
      System.out.println(output);
      sc.close();
}
}