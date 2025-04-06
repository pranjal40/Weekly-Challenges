#include<stdio.h>
#include<stdlib.h>
static  int roman_to_integer (char c)
{
switch (c)
{
case 'I':
    return 1;
    break;

case 'V':
    return 5;
    break;

 case 'X':
    return 10;
    break;

case 'L':
    return 50;
    break;

case 'C':
    return 100;
    break;

case 'D':
    return 500;
    break;

 case 'M':
    return 1000;
    break;

default:
    return 0;

}
}

int roman_to_int (char *a)
{
    int i, int_num = roman_to_integer(a[0]);

    for (i = 1; a[i] != '\0'; i++) {
        int prev_num = roman_to_integer(a[i - 1]);
        int cur_num = roman_to_integer(a[i]);
        if (prev_num < cur_num) {
            int_num = int_num - prev_num + (cur_num - prev_num);
        } else {
            int_num += cur_num;
        }

    }
    return int_num;
}
int main(void)
 {
  char *str1;
    printf("  enter the Roman number: \n ");
    scanf("%s",str1);
    printf("\nRoman to integer: %d", roman_to_int(str1));
    return 0;
 }