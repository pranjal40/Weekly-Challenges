#include<stdio.h>
  #include<string.h>
  #include<stdlib.h>
  
  int main()
  { 
     int n,i,j,k,l,temp;
     printf("Enter the number of elements to be sorted :- ");
     scanf("%d",&n);
     
     int arr[n];
     printf("Enter the array :- ");
     for(i=0;i<n;i++)
     {
         scanf("%d",&arr[i]);
     }
     
    {
      for (k=0;k< n;k++)
      { 
        for(l=k+1;l<n;l++)
        { 
          if(arr[k]>arr[l])
          { 
              temp = arr[l];
              arr[l] = arr[k];
              arr[k] = temp;
          }
        }
      }
    } 
    
   printf("Sorted array is :- ");
   for(j=0;j<n;j++)
   {
       printf(" %d ",arr[j]);
   }
}
