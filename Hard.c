#include<stdio.h>
#include<math.h>
int main()
{
  double A,B,C,D;
  scanf("%lf %lf %lf %lf",&A, &B, &C, &D);
  double a=B*log(A);
  double b=D*log(C);
  if(a>b)
  {
    printf("YES\n");
  }
  else
  {
    printf("NO\n");
  }
  return 0;
}
