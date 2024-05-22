
#include <stdio.h>

int main() {
    int number[6];
    int number1[6],odd[3],Even[3],p=0,l=0;
     for(int i=0; i<6; i++){
        printf("Enter number : ");
        scanf("%d",&number[i]);
    }
    printf("\n");
     for(int i=0; i<6; i++){
        printf("Enter 6 number : ");
        scanf("%d",&number1[i]);
    }
    
     for(int k=1; k<7; k++){
          if(k%2!=0){
            //   printf("%d",k);
            odd[p]=k;
            p++;
          }else{
            //   printf("%d",k);
            Even[l]=k;
            l++;
          }
        } 


    int c[3];
     for(int k=0; k<3; k++){
            //   printf("%d",odd[k]);
              c[k]=odd[k]*Even[k];
        }
    
        for(int k=0; k<3; k++){
              printf("%d\n",c[k]);
            //   c[k]=odd[k]*Even[k];
        }
    return 0;
}