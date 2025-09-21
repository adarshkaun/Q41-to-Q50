// Write a program to print the following pattern:
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows

    for(int i = 1; i <= rows; i++) {       // Loop for each row
        for(int j = 1; j <= i; j++) {      // Print numbers in each row
            printf("%d", j);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
