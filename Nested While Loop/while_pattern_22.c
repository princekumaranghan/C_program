//  A
//  b c
//  D E F
//  g h i j
//  K L M N O

#include <stdio.h>

int main() {
    int i=1, k='A',l='a';
  while(i<=5){
      int j=1;
       while(j<=i){
           if(i%2==0){
                printf("%2c",l);
           }
           else{
               printf("%2c",k);
           }
          l++;
          k++;
          j++;
      }
      printf("\n");
      i++;
      
  }
    return 0;
}