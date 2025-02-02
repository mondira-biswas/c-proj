#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Inter first number=\n ");
    scanf("%d", &num1);
    printf("Inter second number=\n");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("large=%d\n", num1);
    }
    else if (num1 < num2)
        printf("large=%d\n", num2);
    else
        printf("Numbers are equal");

    return 0;
}