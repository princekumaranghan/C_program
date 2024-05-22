//   A
//   B  A
//   C  B  A
//   D  C  B  A
//   E  D  C  B  A

#include <stdio.h>
int main() {
    // int k = 1;
    for(int i='A'; i<='E'; i++){
        for(int j=i; j>='A'; j--){
            printf("%3c",j);
        }
        printf("\n");
    }
    
    return 0;
}
}