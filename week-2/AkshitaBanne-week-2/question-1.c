<<<<<<< HEAD
#include<stdio.h>
int main()
{
    int days;
    float totalbill;

    printf("LIBERARY!! \n");

    printf("ENTER THE  EXTRA NO OF DAYS YOU BORROWED THE BOOK: \n");
    scanf("%d",&days);

    if(days<=7)
    {
    
    printf("you are good to go !!");
    }

    if(days>7)
    {
     
        totalbill= days*5;

    }

    if (totalbill>100)
    {
       totalbill = totalbill*10;

     printf("FINAL BILL:%d\n",totalbill);
     
    }

    
   else
    {
        printf("NO FINE,NO DUE DATE!!\nTHANKYOU!!");
    

    } 


  
}

=======
#include<stdio.h>
int main()
{
    int days;
    float totalbill;

    printf("LIBERARY!! \n");

    printf("ENTER THE  EXTRA NO OF DAYS YOU BORROWED THE BOOK: \n");
    scanf("%d",&days);

    if(days<=7)
    {
    
    printf("you are good to go !!");
    }

    if(days>7)
    {
     
        totalbill= days*5;

    }

    if (totalbill>100)
    {
       totalbill = totalbill*10;

     printf("FINAL BILL:%d\n",totalbill);
     
    }

    
   else
    {
        printf("NO FINE,NO DUE DATE!!\nTHANKYOU!!");
    

    } 


  
}

>>>>>>> origin/main
