import java.util.Scanner;

public class WarehouseCase{

public static void main(String[] args){
  Scanner sc= new Scanner(System.in);
  System.out.print("Enter the total number of items:");
  int items= sc.nextInt();
  
  int n= items/10;
  System.out.println("Total items :"+items);
  System.out.println("Full boxes needed:"+n);

  if(items%10==0){
     System.out.println("All  boxes  are fully filled ");
    }
 else{
     int n1=items%10;
     System.out.println("Item in the last partially filled box:"+n1);
     }
 sc.close();

  }
}