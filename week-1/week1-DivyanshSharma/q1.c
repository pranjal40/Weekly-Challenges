#include<stdio.h>
int main()
{
char ch[18];

scanf("%s",&ch);
    printf("please enter the name : %s\n",ch);
    float a ;
printf("enter your  basic salary:\n");
    scanf("%f",a);
    float x,y,z;
    x=(20/100)a;
        y=(15/100)a;
    z=(10/100)a;
    printf("dear employee, the company promises to provide you with \n your dearness allounce%f\n your EFE %d\n your home allounce%d\n",x,y,z);
    float b;
    b=a+x+y+z;
    printf ("hence you will be getting a ammount of %d for your excellence service with us\n");
    printf("THANK YOU");

        return 0;
}