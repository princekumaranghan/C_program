#include <stdio.h>

int main() {
 
    int Total;
    for(int i=1; i<=10; i++){
        // for(char j='a'; j<='z'; j++)
        printf("%d\n",i);
        Total += i;
        }
        printf("Total : %d\n",Total);
    return 0;
}