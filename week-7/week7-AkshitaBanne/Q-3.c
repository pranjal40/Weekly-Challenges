#include <stdio.h>

void findPair(int arr[], int size, int target) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                return;
            }
        }
    }
}

int main() {
    int size;
    
    
    do {
        printf("Enter the size of the elements (at least 4): ");
        scanf("%d", &size);
    }
     while (size < 4);
    
    int arr[size];
    int target;
    
    printf("Enter %d elements of the array: ", size);
    for (int i = 0; i < size; i++)
     {
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum you want: ");
    scanf("%d", &target);
    

    findPair(arr, size, target);
    
    return 0;
}