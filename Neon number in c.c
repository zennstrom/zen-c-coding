#include<stdio.h>
int main()
{
    int n,m,b,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    m=n*n;
    /*while(n!=0)
    {
        n=n/10;
        count++;
    }*/
    while(m!=0)
    {
        b=m%10;
        sum=sum+b;
        m=m/10;
    }
    if(sum==n)
    printf("Neon number");
    else
    printf("Not neon number");
}