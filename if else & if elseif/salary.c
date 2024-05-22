// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float salary, sum,HRA,DA;
    printf("Enter salary : ");
    scanf("%f", &salary);
    
    if(salary<=5000){
	    HRA = salary * 0.08;
	    DA = salary * 0.20;
		sum = salary+HRA+DA;
		printf("%.2f", sum);
    } 
	else if(5000<salary<=10000)
	{
		 HRA = salary * 0.12;
		 DA = salary * 0.30;
			sum = salary+HRA+DA;
		printf("%.2f", sum);
    } 
	else if(10000<salary<=15000)
	{
		 HRA = salary * 0.15;
		 DA = salary * 0.40;
		 sum = salary+HRA+DA;
		printf("%.2f", sum);
    } 
	else
	{
	     HRA = salary * 0.20;
		 DA = salary * 0.50;
		 sum = salary+HRA+DA;
		 printf("%.2f", sum);
    } 
    
    return 0;
}
