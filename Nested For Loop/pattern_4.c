#include <stdio.h>

int main() {
    for(int i=1; i<=10; i++){
        if(i%2!=0){
            for(int j=5; j>=1; j--){
                printf("%3d",i);
            }
        }
        printf("\n");
    }
    return 0;
}