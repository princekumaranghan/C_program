//   A
//   b  c
//   D  E  F
//   g  h  i  j
//   K  L  M  N  O

#include <stdio.h>
int main() {
    int k='A', a='a';
    for(int i=5; i>=1; i--){
        for(int j=5; j>=i; j--){
            if(i%2==0){
                printf("%3c",a);   
            }else{
                printf("%3c",k);
            }
            k++;
            a++;
        }
        printf("\n");
    }
    
    return 0;
}