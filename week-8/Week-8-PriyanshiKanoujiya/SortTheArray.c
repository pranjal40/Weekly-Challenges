#include <stdio.h>  
#include <stdlib.h>

void main()  
{  
    int i,size;
    
    printf("Enter the desired size for the array: ");
    scanf("%d",&size);
    
    int *array = (int *)malloc(size * sizeof(int));
    if(array == NULL)
    {
        printf("Memory allocation failed\n");
    }
    
    printf("Enter %d elements array[]: ",size);
    
    for(i = 0;i < size;i++)
    {
        scanf("%d",&array[i]);
    }
    
    printf("The sorted array is :\narray[%d] = {",size);
    
    for(i =0;i < size;i++)
    {
        for(int n = i+1;n < size;n++)
        {
            if(array[i] > array[n])
            {
                int first_element = array[i];
                array[i] = array[n];
                array[n] = first_element;
            }
            
        }
    }
    
    for(i=0;i < size;i++)
    {
        printf("%d,",array[i]);
    }    
    printf("}");
}  
    