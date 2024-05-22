//   5
//   4  5
//   3  4  5
//   2  3  4  5
//   1  2  3  4  5

#include <stdio.h>
int main() {
    // int k = 1;
    for(int i=5; i>=1; i--){
        for(int j=i; j<=5; j++){
            printf("%3d",j);
        }
        printf("\n");
    }
    
    return 0;
}