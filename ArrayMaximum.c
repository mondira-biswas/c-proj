#include<stdio.h>
int main()
{
    int num[100],i,n;
    printf("How many numbers=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for(i=0;i<n;i++)
    {
        if(max<num[i])
        max=num[i];
    }
    printf("Maximum=%d\n",max);
    
}