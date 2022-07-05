// If a three-digit integer is input through keyboard, write a program to print the sum of its digits. (Hint: Use the modulus operator to get the remainder of the division of the number by 10.)
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    printf("Sum of digits: %d\n", (num % 10) + ((num / 10) % 10) + (num / 100));
    return 0;
}