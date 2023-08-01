#include<stdio.h>
#include<assert.h>

float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();

int main(void)
{
	float amo,rate;
	int i;
	testTotalAmount();
	printf("Enter Initial Amount to be invested:");
	scanf("%f",&amo);
	printf("Enter Annual interest Rate(in percentage):");
	scanf("%f",&rate);
	puts("");
	
	for(i=1;i<=5;i++)
	{
		printf("Amount after year %d : %.2f\n",i,findTotalAmount(rate,amo));
		amo=findTotalAmount(rate,amo);
	}
}

float calcAnnualInterest(float rate, float amount)
{
	if(amount > 1000000)
		return interestRate + 0.5;
	return amount*interestRate/100;
}

float findTotalAmount(float interestRate, float amount)
{
	return calcAnnualInterest(interestRate,amount)+amount;
}
void testTotalAmount()
{
	assert(findTotalAmount(5.00,20000.00) == 21000);
	assert(findTotalAmount(10.00,10000.00) == 11000);	
}
