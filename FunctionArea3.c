#include<stdio.h>
double triangleArea(double b, double h)
{
   return 0.5*b*h;
}
int main()
{
    double base,height;
printf("Enter Base and Height=");
scanf("%lf %lf",&base,&height);
double area = triangleArea(base,height);
printf("%.lf\n",area);
}