#include<stdio.h>
int main()
{
    int n,b,max,min;
    printf("Enter the value of n=");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter elements of the array");
    for(b=0;b<n;b++)
    {
        scanf("%d",&a[b]);
    }
    max=a[0];
    min=a[0];
    for(b=0;b<n;b++)
    {
        if(a[b]>max)
        
        max=a[b];
        else
        min=a[b];
    }
    printf("The maximum value preent in the array is %d",max);
   /* for(b=0;b<n;b++)
    {
        if(a[b]<min)
        
        min=a[b];
    }*/
    printf("\nThe minimum value preent in the array is %d",min);
    return 0;
}