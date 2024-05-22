#include <stdio.h>

int main() {
    // int n; 
    // printf("enter any number : ");
    // scanf("%d",&n);
    int i='A';
    while(i<='Z'){
        printf("%c-%c\n",i,i+32);
        i++;
    }

    return 0;
}