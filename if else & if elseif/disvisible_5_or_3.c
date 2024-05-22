#include<stdio.h>
int main(){

	int a,b ;
	
	printf("Enter value A : ");
	scanf("%d", &a);

	if(a%5==0 && a%3==0)
	{
	printf("Your number disvisible ");
	}
	else{
	printf("Your number not  disvisible");
	}
	return 0;
}