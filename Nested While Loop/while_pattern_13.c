//  5
//  4 4
//  3 3 3
//  2 2 2 2
//  1 1 1 1 1

#include <stdio.h>

int main() {
    int i=5;
  while(i>=1){
      int j=5;
       while(j>=i){
          printf("%2d",i);
          j--;
      }
      printf("\n");
      i--;
      
  }
    return 0;

}