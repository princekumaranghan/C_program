#include<stdio.h>
int main(){
    int h[]={'H','E','L','L','O','\0'};
    for(int i=0; h[i]!='\0; i++){
        for(int j=0; j<h[i]; j++){
            printf("%c ",h[j]);
        }
        printf("\n");
    }
}