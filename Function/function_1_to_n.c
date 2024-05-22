#include <stdio.h>

 void number(){
     int n;
     printf("Enter max limits : ");
     scanf("%d",&n);
        for(int i=1; i<=n; i++){
            printf("%4d",i);
        }
 }
int main() {
   
   number();
   
    return 0;
}