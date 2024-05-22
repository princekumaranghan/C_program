#include <stdio.h>
int main() {
    int data1[5];
    int data2[5];
    
    for(int i=0; i<5; i++){
        printf("Enter 5 values: ");
        scanf("%d", &data1[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d\n", data1[i]);
    }
    
    
     for(int i=0; i<5; i++){
         printf("Enter 5 values: ");
        scanf("%d", &data2[i]);
    }
      
     for(int i=0; i<5; i++){
        printf("%d\n", data2[i]);
    }
    return 0;
}