// Write a C program which accepts a string from the user and counts the number of words in it. Do not use any string library function.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        if(str[i] == ' '){
            count++;
        }
        i++;
    }
    printf("Number of words in the string: %d", count+1);
    return 0;
}