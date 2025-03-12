#include <stdio.h>
int main()
{
    long long t, n, test = 0;
    scanf("%lld", &t);
    while (test < t)
    {
        test++;
        long long sum = 0, i;
        scanf("%lld", &n);
        long long a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%lld", &a[i]);
            sum = sum + a[i];
        }
        if (n == 1)
        {
            printf("%lld\n", a[0]);
        }
        else
        {
            printf("%lld\n", sum - (n - 1));
        }
    }
}