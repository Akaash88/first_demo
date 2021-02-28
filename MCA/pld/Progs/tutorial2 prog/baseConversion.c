#include<stdio.h>
int main(){
	int binary ; int rem = 0;
	int result = 0; int weight = 1;
	printf("Enter the binary number: ");
	scanf("%d",&binary);
	int num = binary;
	while(binary != 0){
		rem = binary%10;
		result += rem*weight;
		binary = binary/10;
		weight = weight*2;
	}
	printf("the decimal of %d is: %d \n",num,result);
	return 0;
	}