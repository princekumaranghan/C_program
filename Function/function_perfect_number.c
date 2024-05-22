#include <stdio.h> 

void perfectnumber(int n){
  int i, sum;

  printf("Input the number: ");
  scanf("%d", &n); 
  
  sum = 0;

  printf("The positive divisors: \n");

  for (i = 1; i < n; i++) 
  {
    if (n % i == 0)  
    {
      sum = sum + i; 
      printf("%d  ", i); 
    }
  }
  printf("\n");
  
  if (sum == n){ 
    printf("The number is perfect.\n"); 
  }
  else{
    printf(" The number is not perfect.\n");
  }
}


int main()
{   
    int n;
    perfectnumber(n);
  return 0; 
}

