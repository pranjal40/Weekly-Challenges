#include <stdio.h>
#include <string.h>

int main() {
    char name[100]; 
    char revstr[100]; 
    int count = 0;

    printf("Enter a string ");
    fgets(name, sizeof(name), stdin);
    

    while (name[count] != '\0') {
        count++;
    }

    for (int i = 0; i < count; i++) {
        revstr[i] = name[count - 1 - i];
    }
    revstr[count] = '\0';

    printf("Reversed String: %s\n", revstr);
    
    return 0;
}
