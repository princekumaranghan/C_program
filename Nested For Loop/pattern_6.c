/* A  A  A  A  A
   B  B  B  B  B
   C  C  C  C  C
   D  D  D  D  D
   E  E  E  E  E */

#include <stdio.h>

int main() {
    // int k=1;
    for(int i='A'; i<='E'; i++){
            for(int j='A'; j<='E'; j++){
                printf("%3c",i);
        }
        printf("\n");
    }
    return 0;
}