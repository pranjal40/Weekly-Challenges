#include <stdio.h>  
  
 int fact(int n) 
 {
     if (n == 0)
     return 1;
     else return n*fact(n-1);
 }
int main()  
{  
    int n,num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int same_num = num;
    
    while(same_num != 0)
    {
        n = same_num%10;
        sum = sum + fact(n);
        same_num = same_num/10;
    }
    
    if(sum == num)
    {
        printf("%d is a special number.",num);
    }
    else {
    printf("%d is not a special number.",num);
    }
    
    return 0;
}  
    