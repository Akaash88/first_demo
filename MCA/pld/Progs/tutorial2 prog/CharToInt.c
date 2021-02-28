#include<stdio.h>
	int main(){
		char c;
		int res;
		printf("Enter the character: ");
		scanf("%c",&c);
		printf("\n character size before convertion is %ld",sizeof(c));
		res  = (int)c;
		printf("\n character size after convertion is %ld \n",sizeof(res));
		return  0;
	}
	