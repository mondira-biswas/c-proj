#include <stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);
    for (row = 1; row <= n; row++)
    {
        // printing space
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col < row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (row = n-1; row >= 1; row--)
    {
        // printing space
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col < row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}