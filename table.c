#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter any number =");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d X  %d=%d\n",num,i,num*i);
    }
}
//repeat that means can not stop number//