// print half pyramid with height as input
#include<stdio.h>

void pyramid (int n)
{
    for(int i=0 ; i < n ; i ++ )
    {
        for(int j =0 ; j <= i ; j++)
        {
            printf("*");
        }
         printf("\n");
    }

}

int main()
{   int a;
    printf("enter the height of pyramid: ");
    scanf("%d",&a);
    pyramid(a);
}