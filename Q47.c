// Write a program to print the following pattern:
// *
// **
// ***
// ****
// *****

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows

    for(int i = 1; i <= rows; i++) {       // Loop for each row
        for(int j = 1; j <= i; j++) {      // Print stars in each row
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
