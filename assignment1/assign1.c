// Write a Program that reads two value from the keyboard, swaps their value and prints the result.
//  Language: c

#include <stdio.h>
int main()
{
    int a[2];
    printf("Enter two numbers: ");
    scanf("%d %d", &a[0], &a[1]);
    printf("Entered Numbers: %d %d\n", a[0], a[1]);
    int temp = a[0];
    a[0] = a[1];
    a[1] = temp;
    printf("Swapping Numbers: %d %d", a[0], a[1]);

    return 0;
}