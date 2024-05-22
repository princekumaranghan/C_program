#include <stdio.h>

int main() {
    int n;
    printf("enter any number :");
    scanf("%d",&n);
    for(int i=-n; i<=n; i++)
        printf("%d\n", i);

    return 0;
}