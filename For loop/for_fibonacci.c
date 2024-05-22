#include <stdio.h>
int main() {
    int n;
    int t1=0, t2=1;
    int fibo = t1 + t2;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series: %d, %d, ", t1, t2);
 
  for (int i=3; i<=n; i++) {
    printf("%d, ",fibo);
    t1 = t2;
    t2 = fibo;
    fibo= t1 + t2;
  }

  return 0;
}
