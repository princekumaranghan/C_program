 
 /* A  B  C  D  E
    F  G  H  I  J
    K  L  M  N  O
    P  Q  R  S  T
    U  V  W  X  Y */

#include <stdio.h>

int main() {
    int k=65;
    for(int i='A'; i<='E'; i++){
            for(int j='A'; j<='E'; j++){
                printf("%3c",k++);
        }
        // k+=5;
        printf("\n");
    }
    return 0;
}