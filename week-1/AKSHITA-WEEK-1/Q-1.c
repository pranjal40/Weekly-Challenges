#include<stdio.h>
int n,q;
float t,d,f;
/*t = totals
  d = discount
  f = final */
 int main()
 {
     printf("FAST-FOOD!! \n");

     printf("ITEMS!!\n");
     float pizza_price =  150.0;
     float burger_price = 80.0;
     float hotdog_price = 50.0;

     printf("enter the item no( 1=pizza; 2=burger;3=hotdog)\n");
     scanf("%d",&n);

     printf("enter the quantity\n");
     scanf("%d",&q);

     if(n==1)
     
      t = pizza_price* q;
     

     else if(n==2)
     
        t = burger_price* q;
     
    
      else if(n==3)
     
        t = hotdog_price* q;

     

     if(t>200)
     {
     d = t*0.10;
     f = t-d;
     }

     else
     
     {
        f=t;
     }

     printf("your final bill = %.2f\n",f);
     printf("ENJOY YOUR MEAL!!!");
     return 0;
    }
     




