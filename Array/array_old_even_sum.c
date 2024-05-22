// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int number[9],sum, sum1;
    for(int i=0; i<9; i++){
        printf("Enter Ten number : ");
        scanf("%d",&number[i]);
    }
    for(int i=0; i<9; i++){
         if(number[i]%2==0){
            sum += number[i];
         }else{
             sum1 += number[i];
         }
    }
         printf("Even number's is : %d\n", sum);
         printf("old number's is : %d\n", sum1);
    

    return 0;
}