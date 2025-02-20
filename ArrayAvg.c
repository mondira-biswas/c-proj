#include<stdio.h>
int main()
{
    int i,n,sum=0,a[100] ;
    printf("How many numbers=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is=%d\n",sum);
    printf("The average is=%.2f\n",(float)sum/n);
}