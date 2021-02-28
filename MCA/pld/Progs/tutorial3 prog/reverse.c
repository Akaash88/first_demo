#include<stdio.h>
int main(){
	char word[100];
	char result[100];
	int length;
	int i;
	printf("Enter the character: \n");
	scanf("%s" ,word);
	for( i =0; i =! '\0'; i++){
		length = i;
	}
	i = 0;
	for(int j = length -1; j >= 0; j-- ){
		result[i] = word[j];
		i++;
	}
	result[i] = '\0';
	printf("\nOriginal string = %s\n", word);
    printf("Reverse string = %s \n", result);
	return 0;
}