#include <stdio.h>

void reverse(int n){
    
  int reverse = 0, A;
     
  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n != 0) {
    A = n % 10;
    reverse = reverse * 10 + A;
    n /= 10;
  }
   printf("Reversed number = %d", reverse);
//   reruen 0;
}



int main() {
    int n;
    reverse(n);


 
  return 0;
}