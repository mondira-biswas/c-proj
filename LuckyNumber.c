#include<stdio.h>
int lucky(int n)
{
    while (n > 0)
    {
        int digit = n % 10; 
        if (digit != 4 && digit != 7)
        {
            return 0; 
        }
        n /= 10;
    }
    return 1;
}
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    int found=0;
    for(int i=A;i<=B;i++)
    {
        if(lucky(i))
        {
            printf("%d ",i);
            found =1;
        }
    }
    if(!found)
    {
        printf("-1");
    }
    return 0;
}