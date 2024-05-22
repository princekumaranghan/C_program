#include <stdio.h>

int main() {
    int n; 
    printf("enter any number : ");
    scanf("%d",&n);
   int i=1,k=1;
   do{
       printf("%d\n",i*k);
       i++;
       k = k+k;
   }
   while(i<=n);

    return 0;
}