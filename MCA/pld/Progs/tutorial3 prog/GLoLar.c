#include<stdio.h>
int num1;
int num2;
int main(){
	printf("Enter the number 1: \n");
	scanf("%d",&num1);
	printf("Enter the number 2: \n");
	scanf("%d",&num2);
	if(num1 > num2)
		printf("%d is the largest \n",num1);
	else
		printf("%d is the largest \n",num2);
	return 0;
}