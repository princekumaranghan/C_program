//  5 5 5 5 5
//  4 4 4 4 4
//  3 3 3 3 3
//  2 2 2 2 2
//  1 1 1 1 1

#include <stdio.h>

int main() {
  int i = 5;
    while(i>=1){
        int j=1;
        while(j<=5){
            printf("%2d",i);
            j++;
        }
        i--;
        printf("\n");
    }
   
    return 0;
}