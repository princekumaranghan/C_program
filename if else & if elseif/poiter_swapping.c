#include <stdio.h>

int main() {
        
        // int a,b;
        // printf("Enter number of a :");
        // scanf("%d",&a);
        // printf("Enter number of b :");
        // scanf("%d",&b);
        //  a = a+b;
        //  b = a-b;
        //  a = a-b;
        // printf("value of a : %d\n", a);
        // printf("value of b : %d\n", b);
        int a,b;
        printf("Enter number of a :");
        scanf("%d",&a);
        printf("Enter number of b :");
        scanf("%d",&b);
        int *p1=&a;
        int *s2=&b;
        *p1 = *p1+*s2;
        *s2 = *p1-*s2;
        *p1 = *p1-*s2;
        
        printf("value of a : %d\n", *p1);
        printf("value of b : %d\n", *s2);
        return 0;
}