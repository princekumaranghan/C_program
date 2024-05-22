//   1  1  1  1  1
//   3  3  3  3  3
//   5  5  5  5  5
//   7  7  7  7  7
//   9  9  9  9  9

#include <stdio.h>

int main() {
    int i=1;
    while(i<=10){
        int j=1;
        while(j<=5){
            printf("%3d",i);
         j++;  
        }
        i+=2;
        printf("\n");
    }
   
    return 0;
}