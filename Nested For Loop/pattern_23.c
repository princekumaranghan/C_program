//  1
//  0 1
//  0 1 0
//  1 0 1 0
//  1 0 1 0 1

#include <stdio.h>
int main() {
    int k = 1;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("%2d",k%2);
            k++;
        }
        printf("\n");
    }
    
    return 0;
}