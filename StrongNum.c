#include<stdio.h>
int main()
{
    int num,temp,sum=0,fact,rem,i;
    printf("Enter an integer =");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;

    }
    if(sum==num)
    printf("%d is an strong number",num);
    else
    printf("%d is not an strong number",num);
}