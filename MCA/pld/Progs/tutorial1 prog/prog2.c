#include<stdio.h>
void count(int x );
int main(){
	int x = 0;
	printf("Enter the number you want to count: ");
	scanf("%d",&x);
	printf("\n count starts now \n");
	count(x);
	return 0;
	}
void count(int x){
		for(int i = 1; i <=x; i++){
			printf("%d \n",i);
		}
}