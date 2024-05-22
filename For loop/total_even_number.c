#include <stdio.h>

int main() {
    int total;
    for(int i=2; i<=10; i+=2){
        total+=i;
        printf("%d\n",i);
    }
    printf("Total : %d\n",total);

    return 0;
}