#include<stdio.h>
int main()
{
   float N;
   int intpart;
   float decimalpart;
   scanf("%f",&N);
   intpart =(int)N;
   decimalpart=N-intpart;
   if(decimalpart==0)
   {
    printf("int %d\n",intpart);
   }
   else
   {
    printf("float %d %.3f\n",intpart,decimalpart);
   }
   return 0;

}