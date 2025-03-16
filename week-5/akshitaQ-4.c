#include <stdio.h>

int main() {
    int h, i, n;


    printf("Enter the height of pyramid: ");
    scanf("%d", &h);


    for (i = 1; i <= h; i++) {
        
        for (n = 1; n <=h - i; n++) {
            printf(" ");
        }


        for (n = 1; n<= (2 * i - 1); n++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
