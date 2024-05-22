// * * * * * 
// *       * 
// *       * 
// *       * 
// * * * * * 

#include <stdio.h>

int main() {
    int k=2;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            if(i==1 || j==1 || i==5 || j==5){
                 printf("* ");
            }else{
                 printf("  ");
            }
        }
        printf("\n");
        k=k+2;
    }

    return 0;
}