#include <stdio.h>
int main() {
    int number[10],sum;
    for(int i=0; i<10; i++){
        printf("Enter Ten number : ");
        scanf("%d",&number[i]);
    }
    for(int i=0; i<10; i++){
            sum += number[i];
         
    }
         printf("Sum is : %d\n", sum);
    

    return 0;
}