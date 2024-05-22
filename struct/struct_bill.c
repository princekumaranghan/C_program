#include<stdio.h>
struct Bill
{
	int srno;
	char name[50];
	float rate,qty,amt,dis,billamt,gst,netbill;
};
int main()
{
	struct Bill a[1];
	for(int i=0;i<1;i++)
	{
		printf("Enter Sr No :- ");
		scanf("%d",&a[i].srno);
		printf("Enter Name :- ");
		scanf("%s",&a[i].name);
		printf("Enter Rate Of Item :- ");
		scanf("%f",&a[i].rate);
		printf("Enter Qty Of Item :- ");
		scanf("%f",&a[i].qty);
		printf("\n");
	}
	printf("Sr no\tName\t\tRate\t\tQty\t\t\tAmt\t\t\tDis\t\t\tBillamt\t\t\tGST\t\t\tNetamt");
	for(int i=0;i<1;i++)
	{
		a[i].amt = a[i].rate * a[i].qty;
		a[i].dis = (a[i].amt*5)/100;
		a[i].billamt = a[i].amt-a[i].dis;
		a[i].gst = (a[i].billamt*18)/100;
		a[i].netbill = a[i].billamt + a[i].gst;
		printf("\n%d",a[i].srno);
		printf("\t\t%s",a[i].name);
		printf("\t\t%.2f",a[i].rate);
		printf("\t\t%.2f",a[i].qty);
		printf("\t\t%.2f",a[i].amt);
		printf("\t\t%.2f",a[i].dis);
		printf("\t\t%.2f",a[i].billamt);
		printf("\t\t%.2f",a[i].gst);
		printf("\t\t%.2f",a[i].netbill);
	}
}