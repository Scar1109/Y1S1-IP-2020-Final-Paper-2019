#include<stdio.h>
int main(void)
{
	float cost,total=0.00,discount;
	char size,pay[3];
	int type,num,i;
	//introduction
	printf(">>>>>>>>>>>>>>> WELCOME TO TASTE ME <<<<<<<<<<<<<<<<<");
	puts("\n");
	printf("%10s\t\t %10s\t%s\n\n","Pizza Type","Large(L)","Medium(M)");
	printf("%10s\t%10s\t%s\n","Classic range(1)","1720.00","975.00");
	printf("%10s\t%10s\t%s\n","Signature range(2)","1820.00","1000.00");
	puts("\n");
	//input
	do
	{
	printf("Input pizza type(1/2):");
	scanf("%d",&type);
	if(type==1||type==2)
	{
	printf("Input pizza Size(L/M):");
	scanf("%s",&size);
	
	if(size=='L'||size=='M'||size=='l'||size=='m')
	{
	printf("Input number of pizza:");
	scanf("%d",&num);
	//Price
	if((size=='L'||size=='l')&&type==1)
	{
		cost=1720.0*num;
	}
	else if((size=='L'||size=='l')&&type==2)
	{
		cost=1820.00*num;
	}
	else if((size=='M'||size=='m')&&type==1)
	{
		cost=975.00*num;
	}
	else
	{
		cost=1000.00*num;
	}
	//Calculate Total
	total=total+cost;
	}
	else
	{
		printf("Please Enter Correctly");
		return -1;
	}
	}
	else if(!(type==-1))
	{
		printf("Please Enter Correctly");
		return -1;
	}
	else
	{
		puts("");
	}
	puts("");
	}
	while(type!=-1);
	//Asking Customer type
	printf("Are you paying by credit card (Y/N):");
	scanf("%s",&pay[0]);
	printf("Are you a loyalty customer (Y/N):");
	scanf("%s",&pay[1]);
	printf("Is this an online order (Y/N):");
	scanf("%s",&pay[2]);
	//Cheking Costomer type
	if(pay[0]=='y'||pay[0]=='Y')
	{
		discount=(total*2)/10;
	}
	else if(pay[1]=='y'||pay[1]=='Y')
	{
		discount=(total*15)/100;
	}
	else if(pay[2]=='y'||pay[2]=='Y')
	{
		discount=(total*5)/100;
	}
	else
	{
		discount=0;
	}
	puts("");
	//Output
	printf("Total bill amount: %.2f\n",total);
	printf("Discount: %.2f\n",discount);
	printf("Net amount: %.2f\n",total-discount);
	
	return 0;
}
