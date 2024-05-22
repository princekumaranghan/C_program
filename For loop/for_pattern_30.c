                  
//         *         
//       * * *       
//     * * * * *     
//   * * * * * * *   
//     * * * * *     
//       * * *       
//         *     

#include <stdio.h>

int main() {
    int c1 = (9-1)/2;
    int c2 = 3*9/2-1;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(i+j<=c1 || i-j>=c1 || j-i>=c1 || i+j>=c2){
                printf("  ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}