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
 
   for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            
           if(num[i][j]==0){
               printf("  ");
           }else{
               printf("%2d",num[i][j]);
           }
        }
        printf("\n");
    } 
    return 0;
}