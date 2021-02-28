#include<stdio.h>
void swap(int *x , int *y);
int main(){
	int x = 10; 
	int y = 20;
	printf("before swaping : x = %d & y = %d \n",x,y);
	swap(&x,&y);
	printf("after swaping : x = %d & y = %d \n",x,y);
	return 0;
	}
void swap(int *x, int *y){
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}