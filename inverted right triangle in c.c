#include<stdio.h>
int main()
{
	int n,a,b,c;
	printf("Enter the number of rows");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf(" ");
		}
			for(c=n;c>=a;c--)
			{
			printf("*");
		    }
		    printf("\n");
		}
		return 0;
	}

