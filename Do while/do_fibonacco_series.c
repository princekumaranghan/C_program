#include <stdio.h>

int main() {
    int n; 
    printf("enter any number : ");
    scanf("%d",&n);
   int i=1,t1=0,t2=1, fibo=t1+t2;
   printf("fibonacci series %d, %d,", t1,t2);
   do{
       printf("%d, ",fibo);
       i++;
       t1=t2;
       t2=fibo;
       fibo = t1+t2;
   }
   while(i<=n);

    return 0;
}