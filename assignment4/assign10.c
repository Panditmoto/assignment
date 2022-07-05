// Write a C program that prints the following patterns for the input of n=4. The value of n is input by the user.

#include <stdio.h>
void numTriangle(int n)
{
    int i = 1;
    while (i < n)
    {
        int j = 1;
        while (j <= i)
        {
            printf("%d", j);
            j++;
        }
        j = 1;
        while (j <= n - i)
        {
            printf(" ");

            j++;
        }
        printf("\n");
        i++;
    }
}
void numTriangle2(int n)
{
    int i = 1;
    while (i < n)
    {
        int j = 1;
        while (j <= n - i)
        {
            printf(" ");
            j++;
        }
        j = 1;
        while (j <= i)
        {
            printf("%d", j);
            j++;
        }
        printf("\n");
        i++;
    }
}
void numTriangle3(int n)
{
    int i = 1;
    while (i < n)
    {
        int j = 1;
        while (j <= n - i)
        {
            printf(" ");
            j++;
        }
        j = 1;
        int p = 1;
        while (j <= i)
        {
            printf("%d", p);
            j++;
            p++;
        }
        p = i - 1;
        j = 1;
        while (j <= i - 1)
        {
            printf("%d", p);
            p--;
        }

        printf("\n");
        i++;
    }
}
int main()
{
    int n = 5;
    numTriangle(n);
    numTriangle2(n);
    numTriangle3(n);
    return 0;
}