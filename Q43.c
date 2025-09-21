// Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, digit, fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while(num > 0) {
        digit = num % 10;
        fact = 1;

        // Calculate factorial of the digit
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    if(sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}