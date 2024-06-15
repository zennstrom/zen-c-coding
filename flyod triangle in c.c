#include<stdio.h>
int main()
{
    int a,b,c=1,m =1,x=1;
    for(a=1;a<=21;a=a+m)
    {
        for(b=c;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
        m++;
        c=c+x;
        x++;
    }
}
