#include <stdio.h>
#include <string.h>

void main()
{
  char str[50];
  int i,count= 0;
  printf("enter a string :- ");
  fgets(str,50,stdin);
  for(i=0;str[i] != '\0';i++)
  { 
     if(str[i] == ' ' )
     { 
       if (str[i-1] == 'a' ||  str[i-1] == 'e' ||  str[i-1] == 'i' ||  str[i-1] == 'o' ||  str[i-1] == 'u'||
           str[i-1] == 'A' ||  str[i-1] == 'E'||  str[i-1] == 'I'||  str[i-1] == 'O' || str[i-1] == 'U')
           {
             count++;
           }
     }
  }   
  printf("\n Number of words ending with a vowel are :- %d",count);
}