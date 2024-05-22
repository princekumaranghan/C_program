//  A
//  A B
//  A B C
//  A B C D
//  A B C D E

#include <stdio.h>

int main() {
    int i='A';
  while(i<='E'){
      int j='A';
       while(j<=i){
          printf("%2c",j);
          j++;
      }
      printf("\n");
      i++;
      
  }
    return 0;
}