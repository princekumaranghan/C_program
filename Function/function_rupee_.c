#include<stdio.h>

void coin(int a){
    int c=a,r1=0,r2=0,r5=0,r10=0,r20=0,total=0,sum=0;
    
    while(a!=0)
    {    if(a>=38)
        {
            r1=1;
            r2=1;
            r5=1;
            r10=1;
            r20=1;
            a-=38;
        }else if(a>=20)
        {
            r20++;
            a-=20;
        }else if(a>=10)
        {
            r10++;
            a-=10;
        }
        else if(a>=5)
        {
            r5++;
            a-=5;
        }else if(a>=2)
        {
            r2++;
            a-=2;
        }else if(a>=1)
        {
            r1++;
            a-=1;
        }
        total=r1+r2+r5+r10+r20;
        sum=(r1*1)+(r2*2)+(r5*5)+(r10*10)+(r20*20);
    }

    printf(" 1 * %3d=%3d\n 2 * %3d=%3d\n 5 * %3d=%3d\n10 * %3d=%3d\n20 * %3d=%3d\n",r1,(r1*1),r2,(r2*2),r5,(r5*5),r10,(r10*10),r20,(r20*20));
    printf("Total Coin: %d \nTotal Amount: %d\n\n\n",total,sum);
    
}

void main()
{
    // for(int i=1; i<=38; i++)
    // {   printf("%d  Rs\n",i);
    //     coin(i);
        
    // }

    coin(50);
}
