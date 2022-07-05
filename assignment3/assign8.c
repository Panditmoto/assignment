//Write a C program to find out sum of the following series.

// S = 1@ + 2@ + 3@ + 4@ + … + n@

   //             where, n@ is the sum of all factors of n. Example: 6@ = 1+2+3+6 = 12 


#include<stdio.h> 
int factorOfNum(int n){
	int t=0;
	for(int i=1;i<=n;i++){	
	if(n%i==0){
	t=t+i;

	}
	return t;

	}
	}

int main(){
    int n,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
	int t=factorOfNum(n);
   while(n>0){
    int t=factorOfNum(n);
	s=s+t;
	n--;
    }
    
    printf("Sum of the series S=1@+2@+3@+4@+...+%d is %d",n,t);
    return 0;
}
