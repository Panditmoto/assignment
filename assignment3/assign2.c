// Write a C program to find out sum of digits of a given number.

#include <stdio.h>
void sumofDigits(){
int n, sum = 0;
    printf("Enter a number: ");
    
    scanf("%d", &n);
int t=n;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    printf("Sum of digits of %d is %d\n", t, sum);

}
int main()
{
	sumofDigits();
 
    return 0;
}

