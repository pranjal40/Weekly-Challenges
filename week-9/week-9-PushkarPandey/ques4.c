#include <stdio.h>

int main() {
    int i,j,k,l,m,n,p,g,h;
    printf("Enter the desired height of the Hourglass :- ");
    scanf("%d",&h);
    if(h%2!=0){
       for (i=0;i<=h/2;i++)
       {
           for(j=0;j<=i;j++)
           {
               printf("*");
           }
           for(k=1;k<h-(2*i);k++)
           {
               printf(" ");
           }
           for(l=0;l<=i;l++)
           {
               printf("*");
           }
           printf("\n");
       }
       
       for(p=0;p<h/2;p++)
       {
           for(n=0;n<(h/2)-p;n++)
           {
               printf("*");
           }
           for(m=0;m<2+2*p;m++)
           {
               printf(" ");
           }
           for(g=0;g<(h/2)-p;g++)
           {
               printf("*");
           }
           printf("\n");
       }
    }
    else
    {
        printf("Invalid Input");
    }
}