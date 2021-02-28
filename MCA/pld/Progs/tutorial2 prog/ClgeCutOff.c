#include<stdio.h>
int main(){
	int maths , phy , chem;
	printf("enter the maths Marks of student: ");
	scanf("%d",&maths);
	printf("enter the physics Marks of student: ");
	scanf("%d",&phy);
	printf("enter the chemistry Marks of student: ");
	scanf("%d",&chem);
	int total = maths+phy+chem;
	int total2 = maths + phy;
	
	if(maths >=65 && phy >=55 && chem >=50){
		if(total >=190 || total2 >= 140)
			printf("\n congrats!! The candidate is eligible \n");
	}
	else 
		printf("\n sorry! candidate is not eligible. \n");
}
