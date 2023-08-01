#include<stdio.h>
int main(void)
{
	int ratings[3][4];
	int i,j,k,m,n,c=0;
	float avg[3];
	
	for(i=0;i<3;i++)
	{
		printf(">>>>>>>>>>>> 0%d Movie <<<<<<<<<<<",i+1);
		puts("");
		for(j=0;j<4;j++)
		{
			printf("Enter Reviwe by 0%d Reviwer:",j+1);
			scanf("%d",&ratings[i][j]);
		}
		puts("\n");
	}
	puts("\n\n");
	
	printf(" \t(1)\t(2)\t(3)\t(4)\n");
	for(k=0;k<3;k++)
	{
	printf("(%d)\t %d\t%d\t%d\t%d\n",k+1,ratings[k][0],ratings[k][1],ratings[k][2],ratings[k][3]);
	}
	puts("\n");
	
	for(m=0;m<3;m++)
	{
		avg[m]=(ratings[m][0]+ratings[m][1]+ratings[m][2]+ratings[m][3])/4;
		printf("Avarage Rating for 0%d Movie is %.2f\n",m+1,avg[m]);
	}
	puts("\n");
	
	for(n=1;n<3;n++)
	{
		if(avg[c]<avg[n])
		{
			c=n;
		}
	}
	printf("Highest Rated Movie is 0%d Movie.",c+1);
	return 0;
	
}


