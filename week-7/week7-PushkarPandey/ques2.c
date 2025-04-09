#include<stdio.h>
  #include<string.h>
  #include<stdlib.h>
  
  int var(char c)
  { 
    switch(c)
    {
     case 'I' : return 1;
     case 'V' : return 5;
     case 'X' : return 10;
     case 'L' : return 50;
     case 'C' : return 100;
     case 'D' : return 500;
     case 'M' : return 1000;
    }
  }   
  int main()
  {
     int sum=0,i;
     char arr[50];
     printf("Enter the number in roman number system :- ");
     fgets(arr,50,stdin);
     int len = strlen(arr);
     for(i=0;i<len;i++)
     {
        if(i+1 < len)
        {
            if(var(arr[i])>var(arr[i+1]))
               {
                 sum = sum + var(arr[i]);
                 }
             else
             {
                sum = sum + var((arr[i+1]) - var(arr[i]));
                i++;
              }
        }      
        else
       {
           sum = sum + var(arr[i]);
       } 
     }
     printf("Converted number in decimal number system is :- %d",sum);
  }