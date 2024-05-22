//   1
//   0  1
//   0  1  0
//   1  0  1  0
//   1  0  1  0  1

#include <stdio.h>

int main() {
    int i=5, k=1;
  while(i>=1){
      int j=5;
       while(j>=i){
          printf("%3d",k%2);
          k++;
          j--;
      }
      printf("\n");
      i--;
      
  }
    return 0;
}