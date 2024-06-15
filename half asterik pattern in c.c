#include<stdio.h>
int main()
{
	int i,j,k,count=4,u,v=1;
	char ch=' ';
	for(i=1;i<=5;i++)
	{
		for(j=count;j>=0;j--)
		{
			printf("%c",ch);
		}
		for(k=1;k<2*i;k=k+1)
		{
			if(i==2||i==3||i==4)
			{
			 for(u=v;u>=1;u--)
			 printf(" ");
			 //printf("*");
			}
		else
		printf("*");
		v+=2;
	}
	count--;
		printf("\n");
	}
}
