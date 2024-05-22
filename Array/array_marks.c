// Online C compiler to run C program online
#include <stdio.h>

int main() {
    float students[4];
    float sub[2], i, total=0, percentage;
    
    for(int i=0; i<5; i++){
        printf("Enter student's Roll number : ");
        scanf("%f", &students[i]);
        {
            for(int j=0; j<3; j++){
                printf("Enter Three subject marks : ");
                 scanf("%f", &sub[i]);
               
                 }
                 if(i==1 || i==2 || i==3 || i==4 ){
                     total = 0;
                 }
                 for(int l=0; l<3; l++){
                       total += sub[i];
                 }
                 
                percentage = total/3.0;
                 
                 
                 if(75<=percentage){
                     printf("Your Grade is : A \n");
                 }else if(60<=percentage && percentage<75){
                     printf("Your Grade is : B \n"); 
                 }else if (50<=percentage && percentage<60){
                     printf("Your Grade is : C \n"); 
                 }else if  (34<=percentage && percentage<50){
                     printf("Your Grade is : D\n "); 
                 }else if (percentage<34){
                     printf("Your Grade is : E \n"); 
                 }
        }
         printf("Your total marks is : %.2f\n",total);
         printf("Your Precentage is : %.2f\n",percentage);
    }
       
    return 0;
}