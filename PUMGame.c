#include<stdio.h>
int main()
{
    int n,start=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d %d %d PUM\n",start,start+1,start+2);
        start +=4;
    }
    return 0;


}