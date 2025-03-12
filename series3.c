//1^3*3^3*5^3........n^3
#include<stdio.h>
int main()
{
    int n,result=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        result=result * i*i*i;
    }
    printf("Result = %d\n",result);
    return 0;

}