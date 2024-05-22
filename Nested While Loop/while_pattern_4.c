//   2  2  2  2  2
//   4  4  4  4  4
//   6  6  6  6  6
//   8  8  8  8  8
//  10 10 10 10 10

#include <stdio.h>

int main() {
    int i=2;
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