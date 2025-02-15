import java.util.Scanner;

public class RestaurantCase{
static void FinalBill(int price,int quantity){
   float bill = price*quantity;

  if(bill>200){
     bill -= 0.1f*bill;
     }
  System.out.println("Your Final Bill is: "  + bill);
  System.out.println("\n\t Thank you!Kindly visit again.");
   }
 
public static void  main(String[] args){
  Scanner sc= new Scanner(System.in);
  System.out.println("\n\t Welcome to our restaurant!");
  System.out.println(" 1. Pizza - Rs.150 \n 2. Burger - Rs.80 \n 3. Hotdog - Rs.50");
  System.out.print("Enter item code(i.e.1,2,3)& Quantity respectively (as n,n format):");
  String input = sc.nextLine();
  
  String [] arr= input.split(",");
  int item = Integer.parseInt(arr[0].trim());  
  int quantity = Integer.parseInt(arr[1].trim());

  if(item==1){
       FinalBill(150,quantity);
  }
  else if(item==2){
      FinalBill(80,quantity);
  }
  else if(item==3){
      FinalBill(50,quantity);
  }
  else {
        System.out.println("\n\t Invalid input given!!\n\t  Item not found ");
   }

  sc.close();
  }
}
