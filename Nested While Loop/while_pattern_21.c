//  A
//  B A
//  C B A
//  D C B A
//  E D C B A

#include <stdio.h>

int main() {
    int i='A';
  while(i<='E'){
      int j=i;
       while(j>='A'){
          printf("%2c",j);
          j--;
      }
      printf("\n");
      i++;
      
  }
    return 0;
}