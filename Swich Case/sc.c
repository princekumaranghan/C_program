#include<stdio.h>
int main()
{
	int a=20,b=5,ch;
	printf("1. Addision\n");
	printf("2. Substiction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Addition Is :- %d\n",a+b);
			break;
		case 2:
			printf("Substiction Is :- %d\n",a-b);
			break;
		case 3:
			printf("Multiplication Is :- %d\n",a*b);
			break;
		case 4:
			printf("Division Is :- %d\n",b/a);
			break;
		default:
			printf("Sorry... Wrong Choise...");
			break;
	}
}