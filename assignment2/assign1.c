//If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100. Input error should be checked.

#include <stdio.h>

int main(){
	int marks[4];
	 int sum=0;
	printf("Enter the marks in subject 1,2,3,4,5 ");
	//input marks 
	for(int i=0;i<5;i++){
	
	
	scanf("%d",&marks[i]);
	if(marks[i]>100)
	printf("marks should be less than 100");
	
	}

	
	//Total marks

	for(int i=0;i<5;i++){
	printf("%d\n",marks[i]);
	sum+=marks[i];
	}
	
	printf("Total marks: %d\n",sum);
	printf("Percentage: %d\n",(sum*100)/500);
	

    return 0;
}
