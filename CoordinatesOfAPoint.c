#include <stdio.h>

int main()
{
    float X, Y;

    // Taking input
    scanf("%f %f", &X, &Y);

    // Checking conditions
    if (X == 0 && Y == 0)
    {
        printf("Origem\n");
    }
    else if (X == 0)
    {
        printf("Eixo Y\n");
    }
    else if (Y == 0)
    {
        printf("Eixo X\n");
    }
    else if (X > 0 && Y > 0)
    {
        printf("Q1\n");
    }
    else if (X < 0 && Y > 0)
    {
        printf("Q2\n");
    }
    else if (X < 0 && Y < 0)
    {
        printf("Q3\n");
    }
    else
    {
        printf("Q4\n");
    }

    return 0;
}
