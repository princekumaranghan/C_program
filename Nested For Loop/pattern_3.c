/*  2  2  2  2  2
    4  4  4  4  4
    6  6  6  6  6
    8  8  8  8  8
    10 10 10 10 10 */

#include <stdio.h>

int main() {
    for(int i=2; i<=10; i+=2){
        for(int j=5; j>=1; j--){
                printf("%3d",i);
        }
        printf("\n");
    }
    return 0;
}