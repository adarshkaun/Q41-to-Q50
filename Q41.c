// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum, middlePart;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find the total number of digits
    digits = (int)log10(num) + 1;

    // Extract first and last digit
    firstDigit = num / (int)pow(10, digits - 1);
    lastDigit = num % 10;

    // Extract the middle part
    middlePart = num % (int)pow(10, digits - 1); // remove first digit
    middlePart = middlePart / 10; // remove last digit

    // Swap first and last digit
    swappedNum = lastDigit * (int)pow(10, digits - 1) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}