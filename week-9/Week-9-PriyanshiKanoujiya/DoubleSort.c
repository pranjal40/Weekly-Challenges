#include <stdio.h>  
#include <stdlib.h>

void main()  
{  
    int i,j,k,size_i,size_j;
    
    printf("enter desired size of rows:");
    scanf("%d",&size_i);
    printf("enter desired size of columns:");
    scanf("%d",&size_j);
    
    int *oneD_array = (int *)malloc(size_i * size_j * sizeof(int));
    if(oneD_array == NULL)
    {
        printf("Memory allocation failed\n");
    }
    
    for(k=0;k < size_i * size_j;k++)
    {
            printf("enter array[%d]: ",k);
            scanf("%d",&oneD_array[k]);
    }
    
    for(k = 0;k < (size_i * size_j);k++)
    {
        for(int n = k+1;n < (size_i * size_j);n++)
        {
             if(oneD_array[k] > oneD_array[n])
             {
                 int first_element = oneD_array[k];
                 oneD_array[k] = oneD_array[n];
                 oneD_array[n] = first_element;             
             }   
        }
    }
    
    int array[size_i][size_j];
    
    for(i = 0;i < size_i;i++)
    {
        for(j = 0;j < size_j;j++)
        {
            array[i][j] = oneD_array[i * size_j + j];
            //here array[0][0]=oneD_array[0]
            //array[0][1] = oneD_array[1]
            //array[1][0] = oneD_array[3] if size of column is taken 3
        }
    }
    printf("The sorted array is \n");
    for(i = 0;i < size_i;i++)
    {
        for(j = 0;j < size_j;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}  
    