#include<stdio.h>
int fact(int x);
int main(){
	int num;
	printf("enter the number: \n");
	scanf("%d",&num);
	int res = fact(num);
	printf("factorial of %d is %d \n",num,res);
}

int fact(int x){
	int ans = 1;
	for(int i = x; i >=1; i--)
		ans *= i; 
	return ans;
}


	