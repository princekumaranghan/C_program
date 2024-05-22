//   A
//   B  C
//   D  E  F
//   G  H  I  J
//   K  L  M  N  O


#include <stdio.h>
int main() {
    char k='A';
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            printf("%3c",k++);
        }
        printf("\n");
    }
    
    return 0;
}