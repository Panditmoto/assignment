//If a five-digit integer is input through the keyboard, write a program to print a new number by adding one to each of its digits. For example if the number that is input is 12391 then the output should be displayed as 23402. 

#include<stdio.h>
int main()
{
	int num[5];
	
	printf("Enter a five digit number : ");
	
	for(int i=0;i<5;i++){
	 scanf("%d", &num[i]);
	if(num[i]==9) num[i]=0;
	else if (num[i]==0) num[i]==1;
	else num[i]+=1;
}

	//print
	for(int i=0;i<5;i++){
	printf("%d",num[i]);	
}
	
	
	
	
	
}
