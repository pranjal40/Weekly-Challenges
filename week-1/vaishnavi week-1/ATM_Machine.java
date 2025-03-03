import java.util.Scanner;

public class ATM_Machine{

public static void main(String[] args){
  Scanner sc=new Scanner(System.in);
 
  System.out.print("Enter the amount to withdraw(multiples of 100):");
  int amount =  sc.nextInt();
  
  if(amount%100!=0){
     System.out.println("\n\t Invalid! Please enter a multiple of  100");
     }
  else{
     int n1= amount/500;
     int n2= amount%500/200;
     int n3= amount%500%200/100;
  System.out.println("Withdrawal Successful! You will receive:");
  System.out.println("Rs.500 notes :"+n1);
  System.out.println("Rs.200 notes :"+n2);
  System.out.println("Rs.100 notes :"+n3);
 
   }
  sc.close();

  }
}