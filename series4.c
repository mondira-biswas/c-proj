//1-2-3-4-5.....
#include<stdio.h>
int main()
{
    int n,even=0,odd=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even = even+i;
        }
        else
        {
            odd = odd+i;
        }
    }
    printf("sum=%d\n",odd-even);
    return 0;
}