// Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows

    for(int i = rows; i >= 1; i--) {          // Loop for each row
        for(int j = i; j <= rows; j++) {      // Print numbers in each row
            printf("%d", j);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}