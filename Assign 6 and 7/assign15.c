//  Write a C program which accepts a multi-word string in which successive words may be separated by multiple blanks and reformats the string such that successive words are separated by single blank only. Do not use any string library function. [OPTIONAL]

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i, j, count=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i]!='\0'; i++){
        if(str[i]==' '){
            count++;
        }
    }
    for(i=0; i<count; i++){
        for(j=0; str[j]!='\0'; j++){
            if(str[j]==' '){
                str[j]='\0';
                break;
            }
        }
    }
    puts(str);
    return 0;
}