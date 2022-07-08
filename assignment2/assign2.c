//he length and breadth of a rectangle are input through the keyboard. Write a programme to determine (i) radius of a circle and ratio of perimeters of the rectangle and the circle if the areas of the rectangle and the circle are equal (ii) radius of the circle and the ratio of the areas of the rectangle and the circle if the perimeters of the rectangle and the circle are equal.

#include <stdio.h>
int main(){
    int length,breadth,radius,perimeter,area,ratio1,ratio2;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d",&breadth);
    perimeter=2*(length+breadth);
    area=length*breadth;
    radius=(length+breadth)/2;
    ratio1=perimeter/area;
    ratio2=area/perimeter;
    printf("Radius of the circle: %d\n",radius);
    printf("Ratio of perimeters of the rectangle and the circle: %d\n",ratio1);
    printf("Ratio of areas of the rectangle and the circle: %d\n",ratio2);
    return 0;
}