#include <stdio.h>

int main() {
    int number[9],sum, sum1;
    for(int i=0; i<10; i++){
        printf("Enter Ten number : ");
        scanf("%d",&number[i]);
    }
    for(int i=0; i<10; i++){
         if(number[i]%2==0){
            sum += i;
         }else{
             sum1 += i;
         }
    }
         printf("Old number's is : %d\n", sum);
         printf("Even number's is : %d\n", sum1);
    

    return 0;
}