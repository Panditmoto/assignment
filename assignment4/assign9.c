// Write a program to find the octal equivalent of the entered integer

#include <stdio.h>
int main()
{
    int n, octal = 0, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        octal = octal + (n % 8) * i;
        n = n / 8;
        i = i * 10;
    }
    printf("The octal equivalent of the number is: %d", octal);
    return 0;
}

// Ayush Pandit@DESKTOP-DG4RI72 MINGW64 ~/Desktop/ayush_pandit/assignment4 (master)
// $ ./a
// Enter the number: 200
// The octal equivalent of the number is: 310