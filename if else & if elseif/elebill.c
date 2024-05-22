#include <stdio.h>

int main() { 
    float unit;
    printf("Enter unit : ");
    scanf("%f",&unit);
    
    if(unit<=100){
        float bill = unit*0.60;
        bill+=50;
        printf("Your Bill is : %0.2f",bill);
    }
    else if (100<unit && unit<=200){
      float bill = unit * 0.80 + 50;
      printf("Your Bill is : %0.2f",bill);
    }
    else if (200<unit && unit<=300){
        float bill = unit * 0.90 + 50;
        printf("Your Bill is : %0.2f",bill);
    }
    else
    {
        float bill = unit * 0.90 + 50;
        float additional = bill * 0.15;
        float total_bill = bill + additional;
        printf("Your Bill is : %0.2f",total_bill);
        
     }
    return 0;
}