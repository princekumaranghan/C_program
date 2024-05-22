
#include <stdio.h>

int main()
{
	int A, B, C;

	printf("Enter the numbers A: ");
	scanf("%d", &A);
	
	printf("Enter the numbers B: ");
	scanf("%d", &B);
	
	printf("Enter the numbers C: ");
	scanf("%d", &C);

	if (A >= B && A >= C){
		printf("The largest number A = %d", A);
	}
	else if(B >= A && B >= C){
		printf("The largest number B = %d", B);
	}
	else{
		printf("The largest number C = %d", C);
	}
	return 0;
}
