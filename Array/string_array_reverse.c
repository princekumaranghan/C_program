#include <stdio.h>

int main() {
    
    int k, j;
    
    char b[]="princekumar anghan";
    char a[]={'a','b','c','d','\0'};
    
    
    for(int i=3; a[i]!='\0'; i--)
    {
        printf("%2c", a[i]);
    }
    printf("\n");
    
        for(int i=17; b[i]!='\0'; i--)
    {
        printf("%2c", b[i]);
    }     
    
    return 0;
}