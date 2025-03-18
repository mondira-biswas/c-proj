#include<stdio.h>
#include<string.h>
int main()
{
    char source[]="C programming";
    char target[20];
    strcpy(target,source);//strcpy library function
    printf("Source string=%s\nTarget string=%s\n",source,target);
}