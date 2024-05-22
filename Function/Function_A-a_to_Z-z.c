#include <stdio.h>
int number(){
     int total;
    //  int n;
    //  printf("Enter max limits : ");
    //  scanf("%d",&n);
        for(int i='A'; i<='Z'; i++){
            printf("%c-%c\n",i,i+32);
        }
        return 0;
 }
 
int main() {
    number();
   
    return 0;
}

