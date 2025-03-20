#include <stdio.h>  
#include <math.h>  
 
int main()  
{  
    int n,An,Bn;
    
    printf("To show sum of n no. of terms of a series S.\n");
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    
    printf("S =");
    
    for(int i=1;i <= n;i++)
    {
        An = pow(-1,i+1)*(2+(i-1)*3);
        Bn = (7+(i-1)*4);
        printf("(%d/%d) +",An,Bn);
    }
    
}  
    