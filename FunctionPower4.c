#include<stdio.h>
void calculatePower(double base,double exp)
{
    double result=1;
    for(int i=1;i<=exp;i++)
    {
        result=result*base;
    }
    printf("%.lf\n",result);
}
int main()
{
    calculatePower(3,5);
}