//Write a C program to find the reverse of a given number.

#include <stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    printf("Reverse of %d is %d",n,rev);
    return 0;
}