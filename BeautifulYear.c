#include<stdio.h>
int DistinctDigits(int year)
{
    int digits[10]={0};
    while(year>0)
    {
        int digit = year%10;
        {
            if(digits[digit])
            return 0;
            digits[digit]=1;
            year /=10;
        }
    }
    return 1;
}
int main()
{
    int y;
    scanf("%d",&y);
    while(1){
    y++;
    if(DistinctDigits(y))
    {
        printf("%d\n",y);
    break;

    }
}
    return 0;
}