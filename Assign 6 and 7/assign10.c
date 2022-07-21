// Write a program to count the number of occurrences of any two vowels in succession in a line of text.

#include<stdio.h>
int main(){
    char str[100];
    int i, count=0;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            count++;
        }
    }
    printf("Number of occurrences of any two vowels in succession in a line of text is: %d", count);
    return 0;
}