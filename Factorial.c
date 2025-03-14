#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d",&t);
    while(t--)
    {
    long long fact = 1;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%lld\n", fact);
}

    return 0;
}