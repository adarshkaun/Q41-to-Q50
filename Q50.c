// Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows

    for(int i = 0; i < rows; i++) {          // Loop for each row
        // Print leading spaces
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for(int k = 0; k < rows - i; k++) {
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}