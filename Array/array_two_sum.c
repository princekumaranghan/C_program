#include <stdio.h>

int main() {
    int num[3][3];
    int num1[3][3];
    int sum=0, sum1=0, sum2=0;
    
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter number : ");
            scanf("%d",&num[i][j]);
        }
        printf("\n");
    }
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d",num[i][j]);
            sum += num[i][j];
            
        }
        printf("\n");
    }
    printf("\n");
        for(int i=0; i<3; i++){
             for(int j=0; j<3; j++){
                printf("Enter number : ");
                scanf("%d",&num1[i][j]);
        }
        printf("\n");
    }
     for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d",num1[i][j]);
            sum1 += num1[i][j];
            
        }
        printf("\n");
    }
   sum2 = sum + sum1;
    printf("\n");
    printf("First sum is %d\n", sum);
    printf("Second sum is %d\n", sum1);
    printf("Total sum is %d\n", sum2);
 
    return 0;
}