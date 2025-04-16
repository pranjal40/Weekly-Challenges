#include <stdio.h>  

int fact(int n)
{
    if (n == 0){
    return 1;
    }
    else { return n*fact(n-1);}
}

void main()  
{  
    int stairs,total_ways = 0;
    
    printf("Enter the number of stairs : ");
    scanf("%d",&stairs);
    int num = stairs;
    int twos_present = stairs/2 ,i,j = 1,k = 0;
    
    if(stairs%2 != 0)
    {
        for(i = twos_present + 1;i <= num;i++)
        {
            total_ways = total_ways + (fact(i))/(fact(twos_present)*fact(j)) ;
            j = j + 2;
            twos_present = twos_present - 1;
        }
        printf("The total no. of ways to climb stairs : %d",total_ways);
    }
        
    if(stairs%2 == 0)
    {
        for(i = twos_present;i <= num;i++)
        {
            total_ways = total_ways + (fact(i))/(fact(twos_present)*fact(k)) ;
            k = k + 2;
            twos_present = twos_present - 1;
        }
        printf("The total no. of ways to climb stairs : %d",total_ways);
    }
        
        
}  
    