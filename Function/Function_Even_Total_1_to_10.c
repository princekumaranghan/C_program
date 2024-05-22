#include <stdio.h>
int number(){
     int total;
    //  int n;
    //  printf("Enter max limits : ");
    //  scanf("%d",&n);
        for(int i=0; i<=10; i+=2){
            printf("%d\n",i);
            total = total + i;
        }
        printf("\nTotal is : %d", total);
        return total;
 }
 
int main() {
    int total;
    total = number();
   
    return 0;
}

