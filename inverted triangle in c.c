#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter the no of rows");
	scanf("%d",&a);
	int n=1;
	//printf(" ");
	for(e=1;e<=2*a-1;e++)
	printf("*");
	printf("\n");
	for(c=a-1;c>=1;c--)
	{
		for(b=1;b<=n;b++)
	{
	   printf(" ");
	}
		for(d=1;d<=2*c-1;d++)
		{
			if(d==1||d==(2*c-1))
			printf("*");
			else
			printf(" ");
			
		}
		//e+=2;
		printf("\n");
		n++;
	}
	
	return 0;
}
