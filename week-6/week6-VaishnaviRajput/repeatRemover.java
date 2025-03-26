import java.util.Scanner;

public class repeatRemover {

    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a string:");
        String input=sc.nextLine();
        System.out.print("Enter the desired case(U or L):");
        String strCase=sc.next();
       
       StringBuilder usedChar=new StringBuilder();
       StringBuilder output=new StringBuilder();
        char letter='a';
       for(int i=0;i<input.length();i++){
        if(strCase.equalsIgnoreCase("u")){
            if(input.charAt(i)>='a' || input.charAt(i)<='z'){
                 letter=(char)(input.charAt(i)-32);
            }
        }
            else if(strCase.equalsIgnoreCase("l")){
                if(input.charAt(i)>='A' || input.charAt(i)<='Z'){
                    letter=(char)(input.charAt(i)+32);
            }
        }
        else{
            System.out.println("Invalid case tye given!!!");
            break;
        }
        boolean space=false;
        String specialchar=" !@#$%^&*()-=_+[]{}\'\";:/?.><,";
        for(int j=0;j<usedChar.length();j++){
        if(letter!=usedChar.charAt(j) && !space){
            if(letter==' '){
                space=true;
            }
           output.append(letter);
        }
        for(int k=0;k<specialchar.length();k++){
        if(letter!=specialchar.charAt(k)){
            usedChar.append(letter);
            space=false;
        }
    }
       
       }
    }
    System.out.println(output);
    sc.close();

}
}
