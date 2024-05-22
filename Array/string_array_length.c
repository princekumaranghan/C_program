#include <stdio.h>

int main() {
    
    int k, j;
    
    char b[]="princekumar anghan";
    char a[]={'a','b','c','d','\0'};
    
    for(int i=0; a[i]!='\0'; ++i)
    {
        j+=i;
    }
    
    
    for(int i=0; b[i]!='\0'; ++i)
    {
        k+=1;
    }
            printf("Length of b[] : %d\n", k);
            printf("Length of a[] : %d", j);
    
    return 0;
}