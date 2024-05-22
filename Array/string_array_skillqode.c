#include<stdio.h>

    int main()
    {
    int i=0,j=0;
    printf("Enter Your Name:-");
    char name[50];
    gets(name);



    printf("Enter Your Name:-");
    char name1[50];
    gets(name1);

    
    for(j=0 ; name[j]!='\0';j++);
    
    for(i=0 ; name1[i]!='\0';i++,j++)
    {
        name[j]=name1[i];
    }
    
    puts(name);
    }