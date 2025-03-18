#include<stdio.h>
int main()
{
    char s1[30];
    printf("Enter your full name=");
    gets(s1);//scanf er poriborte cz eta space dele o full name print kore
    printf("Full name = %s\n",s1);
    return 0;
}