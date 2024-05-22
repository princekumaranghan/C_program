#include <stdio.h>

int main() {
	float sub1,sub2,sub3,total,per;
	
	printf("Enter sub1 : ");
	scanf("%f",&sub1);
	
	printf("Enter sub2 : ");
	scanf("%f",&sub2);
	
	printf("Enter sub3 : ");
	scanf("%f",&sub3);
	
	total = sub1+sub2+sub3;
	per = total/3.0;
	printf("YOUR TOTAL IS : %.2f\n",total);
	printf("YOUR PERCENTAGE IS : %.2f\n",per);
	if(per>75){
	    printf("YOUR GRADE IS A");
	}
	else if(60<per && per<75){
	    printf("YOUR GRADE IS B");
	}
	else if(45<per && per<60){
	    printf("YOUR GRADE IS C");
	}
	else if(35<=per && per<45){
	    printf("YOUR GRADE IS D");
	}
	else
	{
	    printf("YOUR ARE FAIL");
	}
	return 0;
	
}