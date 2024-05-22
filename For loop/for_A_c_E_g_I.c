#include <stdio.h>

int main() {
    
   int i='A',k;
   do{
       if(k%2==0){
            printf("%c\n",i);
       }else{
           printf("%c\n",i+32);
       }
       i+=2;
        k++;
   }
   while(i<='Z');
  
    return 0;
}