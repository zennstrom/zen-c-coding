#include<stdio.h>
void bubble_sort(int [],int);
int main()
{
    int a,n,*p ;
    printf("Enter the value of n");
    scanf("%d",&n);
    int t[n];
    printf("Enter the elements of the array");
    for(a=0;a<n;a++)
    {
        scanf("%d",&t[a]);
    }
    
    bubble_sort(t,n);
    return 0;
}
void bubble_sort(int p[],int n)
{
    int c,b,o;
    for(c=0;c<n;c++)
    {
    for(b=0;b<n-1;b++)
    {
        if(p[b]>p[b+1])
        {
            o=p[b];
            p[b]=p[b+1];
            p[b+1]=o;
        }
    }
    }
    printf("The sorted array is\n");
    for(b=0;b<n;b++)
    {
        printf("%d\t",p[b]);
    }
}