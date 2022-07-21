// Write a C program that accepts a date as a string in “dd/mm/yyyy” format from the user, 
//and prints the date in “date-month-year” format. [Example: If the input date is “19/04/2010”, 
//the program should print 19-April-2010]. [OPTIONAL]

#include<stdio.h>
#include<string.h>
int main(){
    char month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("Enter the date in dd/mm/yyyy format: ");
    char date[11];
    scanf("%s", date);
    int day=date[0]-'0';
    int month_num=date[3]-'0';
    int year=date[6]-'0';
    year=year*10+date[7]-'0';
    year=year*10+date[8]-'0';
    year=year*10+date[9]-'0';
    printf("%d-%s-%d", day, month[month_num-1], year);
    return 0;

    

}