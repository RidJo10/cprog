#include <stdio.h>

int main() {
    int i, j, rows = 5;
    char ch;

    // Loop through rows
    for(i = 1; i <= rows; i++) {

        // Reset character for each row
        ch = 'A';  

        // Print alphabets
        for(j = 1; j <= i; j++) {
            
            // Print and increment character
            printf("%c ", ch++);  
        }

        printf("\n");
    }

    return 0;
}