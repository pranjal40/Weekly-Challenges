#include <stdio.h>  
#include <math.h>

void main()  
{  
    int num,count = 0 ;
    
    printf("Enter a random number: ");
    scanf("%d",&num);
    
    int square = pow(num,2);
    int n = square;
    
    do
    {
        square /= 10;
        ++count;
    }
        while(square != 0);
    int sum;    
    
    if(count %2 == 0)
    {
        count = count/2;
        sum = n/pow(10,count) + fmod(n,pow(10,count));
        printf("The sum of two halves is %d",sum);
    }
    
    else if(count%2 != 0)
    {
        count = count/2 ;
        sum = n/(pow(10,count+1)) + fmod(n,pow(10,count+1));
        printf("The sum of two halves is %d",sum);
    }
    
    if(num == sum)
    {
        printf("\nHence %d is a Kaprekar number.",num);
    }
    else printf("\nHence %d is not a Kaprekar number.",num);
}  
    