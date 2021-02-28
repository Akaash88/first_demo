#include<stdio.h>
int main(){
	int age;
	printf("Enter the candidate age: ");
	scanf("%d",&age);
	if(age >=18)
		printf("\n eligible for vote congrats \n");
	else 
		printf("Sorry not eligible.. please comeback once reached 18 years \n");
	return 0;
}