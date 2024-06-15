#include<stdio.h>
int main()
{
    int a,b,c=16,m =7,x=5;
    for(a=21;a>=1;a=a-m)
    {
        for(b=c;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
        m--;
        c=c-x;
        x--;
    }
}
