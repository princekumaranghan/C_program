#include <stdio.h>

int main() {
    int n,k=1;
    
    printf("Enter any number : ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        printf("%d\n",i*k);
        k = k+k;
    }
    return 0;
}