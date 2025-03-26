import java.util.Scanner;

public class vowelEndCounter {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter a string:");
        String input=sc.nextLine();

        String vowel="aeiouAEIOU";
        int i=0;
        int count=0;

        String[] arr=input.split("\\W+");
       
        while(i<arr.length){
        
            if(!arr[i].isEmpty()){
             char lastChar=arr[i].charAt((arr[i].length())-1);
            for(int j=0;j<vowel.length();j++){
               if(lastChar==vowel.charAt(j)){
                count++;
                break;
               } 
            }
            i++;
        }}
        System.out.println("Number of words ending with a vowel:"+count);

        sc.close();
    
}
}