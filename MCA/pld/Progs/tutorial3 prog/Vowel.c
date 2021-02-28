#include<stdio.h>
int main(){
	char c;
	printf("Enter a letter: \n");
	scanf("%c",&c);
	switch(c){
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' :
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' : 
					printf("%c is a Vowel \n");
					break;
		default :
					printf("%c is not a Vowel \n");
	}
	return 0;
}