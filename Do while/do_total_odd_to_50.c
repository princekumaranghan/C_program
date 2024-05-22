#include <stdio.h>

int main() {
    // int n; 
    // printf("enter any number : ");
    // scanf("%d",&n);
   int i=1, total;
   do{
       printf("%d\n",i);
       total+=i;
       i+=2;
   }
   while(i<=50);
   printf("Total : %d",total);

    return 0;
}