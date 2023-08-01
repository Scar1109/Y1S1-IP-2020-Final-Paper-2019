#include<stdio.h>
int main(void)
{
	int fib[10]={0,1};
	int i,j;
	
	for(i=2;i<10;i++)
	{
		fib[i]=fib[i-2]+fib[i-1];
	}
	
	for(j=0;j<10;j++)
	{
		printf("%d\t",fib[j]);
	}
	return 0;
}
