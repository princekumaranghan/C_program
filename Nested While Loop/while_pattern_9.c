//   A  A  A  A  A
//   B  B  B  B  B
//   C  C  C  C  C
//   D  D  D  D  D
//   E  E  E  E  E

#include <stdio.h>

int main() {
    int i='A';
    while(i<='E'){
        int j=1;
        while(j<=5){
            printf("%3c",i);
         j++;  
        }
        i++;
        printf("\n");
    }
   
    return 0;
}