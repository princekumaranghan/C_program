
#include <stdio.h>

int main() {
    int num[3][3];
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter number : ");
            scanf("%d",&num[i][j]);
        }
        printf("\n");
    }
    int sum=0, sum1=0, sum2=0;
   for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%2d",num[i][j]);
            if(i<j){
               sum = sum + num[i][j];
            }else if (j<i){
               sum1 = sum1 + num[i][j];
            }else if(i==j){
                 sum2 = sum2 + num[i][j];
            }
        }
        printf("\n");
    } 
    printf("upper triangle : %d\n",sum);
    printf("lower triangle : %d\n",sum1);
    printf("diagonal : %d",sum2);
    return 0;
}