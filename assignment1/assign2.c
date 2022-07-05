// The length and breadth of a rectangle and radius of a circle are input throiugh the keyboard. Write a program to calculate the area and perimeter of a rectangle and the area and perimeter of a circle.

#include <stdio.h>
int main()
{
    int length, breadth, radius;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &length, &breadth);
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    printf("Area of rectangle: %d\n", length * breadth);
    printf("Perimeter of rectangle: %d\n", 2 * (length + breadth));
    printf("Area of circle: %d\n", 3.14 * radius * radius);
    printf("Perimeter of circle: %d\n", 2 * 3.14 * radius);
    return 0;
}