#include<stdio.h>
int main(){

	int a,b ;
	
	printf("Enter value A : ");
	scanf("%d", &a);
	printf("Enter value B : ");
	scanf("%d", &b);
	
	if(a<b)
	{
	printf("A in smallest ");
	}
	else{
	printf("B in smallest");
	}
	return 0;
}