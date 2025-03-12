#include <stdio.h>

int main()
{
    long long A, B, C, D; // Use long long to prevent overflow
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    long long X = (A * B) - (C * D);
    printf("Difference = %lld\n", X); // Use %lld for long long output

    return 0;
}