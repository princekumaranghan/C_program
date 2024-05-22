//   1
//   2  3
//   4  5  6
//   7  8  9 10
//  11 12 13 14 15

#include <stdio.h>

int main() {
    int i=5, k=1;
  while(i>=1){
      int j=5;
       while(j>=i){
          printf("%3d",k++);
          j--;
      }
      printf("\n");
      i--;
      
  }
    return 0;
}