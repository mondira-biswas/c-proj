
#include<stdio.h>
int main()
{
    int number,reminder,temp,sum=0;
    printf("Enter any numbe=");
    scanf("%d",&number);
    temp=number;
    while(temp!=0){
    reminder=temp%10;
    sum=sum * 10 + reminder;
    temp=temp / 10;
    }
    if(number==sum)
    printf("Palindrom number");
    else
    printf("Not palindrom number");
    return 0;

}