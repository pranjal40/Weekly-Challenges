#include <stdio.h>
#include <string.h>

void PP(int n)
{
    int i,j;
    for (i=1;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
 int main ()
 {
    int h;
    printf("please enter the heigth of the pyramid :- ");
    scanf("%d",&h);
     PP(h);
     return 0;
 }