//   A  B  C  D  E
//   F  G  H  I  J
//   K  L  M  N  O
//   P  Q  R  S  T
//   U  V  W  X  Y

#include <stdio.h>

int main() {
    int i=1,k='A';
    while(i<=5){
        int j=1;
        while(j<=5){
            printf("%3c",k++);
         j++;  
        }
        i++;
        printf("\n");
    }
   
    return 0;
}