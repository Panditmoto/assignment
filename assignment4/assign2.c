// Write a C program which accepts 100 integers and displays the counts of positives, negatives and zeros entered

#include <stdio.h>
int main()
{
    int i, n, pos = 0, neg = 0, zero = 0;
    printf("Enter the number of integers You want to Enter: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the integer: ");
        scanf("%d", &i);
        if (i > 0)
            pos++;
        else if (i < 0)
            neg++;
        else
            zero++;
    }
    printf("The number of positives is: %d\n", pos);
    printf("The number of negatives is: %d\n", neg);
    printf("The number of zeros is: %d\n", zero);
    return 0;
}
// Ayush Pandit@DESKTOP-DG4RI72 MINGW64 ~/Desktop/ayush_pandit/assignment4 (master)
// $ ./a
// Enter the number of integers You want to Enter: 10
// Enter the integer: 0
// Enter the integer: 1
// Enter the integer: -2
// Enter the integer: -3
// Enter the integer: -4
// Enter the integer: -5
// Enter the integer: -6
// Enter the integer: 1
// Enter the integer: 20
// The number of positives is: 3
// The number of negatives is: 5
// The number of zeros is: 1
