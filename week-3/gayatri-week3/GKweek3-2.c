# include <stdio.h> 
int dig_sum (int num)
{
    int original = num , remainder ; 
    int added = 0 ;
    remainder = num%10;
    while (remainder<9 && remainder>0 )

    {
        remainder = num%10 ;
     added += remainder ;
        num = num/10; 
     //added = added + num ; 
     
    }   
    printf("%d",added);
    return 0 ; 

}

int main()
{
    int a;
    printf("enter anumber to sum its digit:");
    scanf("%d",&a);
    dig_sum(a);
}