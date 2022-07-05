// Write a program to add first seven terms of the following series using a for loop:
// 1/1!+2/2!+3/3!+⋯ [OPTIONAL]

#include <stdio.h>
int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n = 7, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i / factorial(i));
    }
    printf("%d", sum);
    return 0;
}