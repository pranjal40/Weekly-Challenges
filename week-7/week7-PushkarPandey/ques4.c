#include <stdio.h>

int main()
{
    int i,j,k,h,n,m,l;
    printf("Enter the desired heigth of the hourglass :- ");
    scanf("%d",&h);
    if(h%2==1)
    {
    for(i=0;i< h/2;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=0;j<h-(2*i);j++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    for(l=0;l<=(h/2);l++)
    {
         for(n=0;n<(h/2)-l;n++)
        {
            printf(" ");
        }
        for(m=0;m<=(2*l);m++)
        {
            printf("#");
        }
        printf("\n");
    }
    }
    else
    {
        printf("Bakchodi Mat Kar Lode Odd Number Dal Na");
    }

}