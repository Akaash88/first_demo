#include<stdio.h>
int main(){
	int x = 10;
	if(x>0) 
		printf("%d is positive",x);
	else if(x<0)
		printf("%d is negative",x);
	else
		printf("Please enter natural numbers");
	printf("\n");
	return 0;
}