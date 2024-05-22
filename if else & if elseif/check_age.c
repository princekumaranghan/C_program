#include <stdio.h>

int main() { 
    float age;
    printf("Enter your Age : ");
    scanf("%f",&age);
    
    if(age<18){
        printf("YOUR ARE TEENAGER\n");
        printf("YOUR ARE NOT ELIGIBLE FOR VOTING");
    }
    else{
        printf("YOUR ARE ADULT\n");
        printf("YOUR ARE ELIGIBLE FOR VOTING");
    }
     return 0;
}