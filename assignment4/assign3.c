// Write a C program to print the first n numbers of the Fibonacci sequence. The Fibonacci sequence is constructed by adding the last two numbers of the sequence so far to get the next number in the sequence. The first and second numbers of the sequence are defined as 0 and 1. We get:
// 0, 1, 1, 2, 3, 5, 8, 13, 21…

#include <stdio.h>
//with recursion

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the number of Fibonacci numbers You want to print: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", fibonacci(i));
    }
    return 0;
}

// Ayush Pandit@DESKTOP-DG4RI72 MINGW64 ~/Desktop/ayush_pandit/assignment4 (master)
// $ ./a
// Enter the number of Fibonacci numbers You want to print: 10
// 0
// 1
// 1
// 2
// 3
// 5
// 8
// 13
// 21
// 34
