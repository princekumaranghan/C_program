//  a
//  b C
//  d E f
//  g H i J
//  k L m N o

#include <stdio.h>

int main() {
    int i=1, k='A',l='a';
  while(i<=5){
      int j=1;
       while(j<=i){
           if(j%2==0){
                printf("%2c",k);
           }
           else{
               printf("%2c",l);
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