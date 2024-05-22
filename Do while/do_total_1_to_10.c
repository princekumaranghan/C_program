#include <stdio.h>

int main() {
    // int n; 
    // printf("enter any number : ");
    // scanf("%d",&n);
   int i=1, total;
   do{
       printf("%d\n",i);
       total+=i;
       i++;
   }
   while(i<=10);
   printf("Total : %d",total);

    return 0;
}