#include <stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);
    for (row = n; row >=1; row--)
    {
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (col = 1; col <= row; col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}