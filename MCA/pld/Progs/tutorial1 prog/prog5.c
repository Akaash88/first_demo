#include <stdio.h>
#include <math.h>

 
void main()
{
	double res;
	int num;
	printf("Enter the value of sin:\n ");
	scanf("%d", &num);
	res = sin(num);
	printf("value of sin(%d) is : %lf \n", num,res);
}