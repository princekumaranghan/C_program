//  5
//  4 5
//  3 4 5
//  2 3 4 5
//  1 2 3 4 5

#include <stdio.h>

int main() {
    int i=5;
  while(i>=1){
      int j=i;
       while(j<=5){
          printf("%2d",j);
          j++;
      }
      printf("\n");
      i--;
      
  }
    return 0;
}