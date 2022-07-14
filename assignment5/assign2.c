// Write a program in C to read n number of values in an array. After that, count the total number of duplicate elements in that array. Then copy the elements except the duplicate elements of that array into another array and display this array in reverse order.

#include <stdio.h>
int main()
{
    int a[10], i, j, temp, count = 0;
    printf("Enter the elements of the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
    }
    printf("The number of duplicate elements is %d\n", count);
    for (i = 0, j = 9; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("The reversed array is\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d,", a[i]);
    }
    return 0;
}
