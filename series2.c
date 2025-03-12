// 1+1/2+1/3..+1/n#include <stdio.h>
#include<stdio.h>
int main()
{
    double n, i, sum = 0;
    scanf("%lf", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (1/i);
        if(i==1)
        {
            printf("\n1 + ");
        }
        else if(i==n)
        {
            printf("(1/%lf)",i);
        }
        else
        {
            printf("(1/%lf)+",i);
        }
    }
    printf("\nSum = %.2lf\n", sum);
    return 0;
}