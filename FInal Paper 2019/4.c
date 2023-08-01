#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[225],scnName[225],num[225],scnNum[225];
	int i;
	
	FILE *cfPtr;
	cfPtr=fopen("loyalty.dat","r");
	
	if ( cfPtr == NULL)
    {
        printf("Cannot create file\n");
        return -1;
    }
    
    for(i=0;i<5;i++)
    {
	printf("Enter your name :");
	scanf("%s",name);
	printf("Enter your loyality number :");
	scanf("%s",num);
	puts("");
	
	while (!feof(cfPtr))
	{
		fscanf(cfPtr,"%s %s",scnNum,scnName);	
		
	if(strcmp(scnNum,num)==0)
		{
			printf("Your loyalty number already exists");
			return -1
		}
	}
	fclose(cfPtr);
	cfPtr=fopen("loyalty.dat","a");
	
	if ( cfPtr == NULL)
    {
        printf("Cannot open the file\n");
        return -1;
    }
    
	fprintf(cfPtr,"%s %s\n",num,name);
	fclose(cfPtr);
	}
	return 0;
}