#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C); // তিনটি সংখ্যা ইনপুট নিই

    // সর্বনিম্ন সংখ্যা খুঁজে বের করা
    int min = A;
    if (B < min)
        min = B;
    if (C < min)
        min = C;

    // সর্বোচ্চ সংখ্যা খুঁজে বের করা
    int max = A;
    if (B > max)
        max = B;
    if (C > max)
        max = C;

    // সর্বনিম্ন এবং সর্বোচ্চ সংখ্যা প্রিন্ট করা
    printf("%d %d\n", min, max);

    return 0;
}
