//connect str1+str2
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="MY name is ";
    char str2[]="Mondira Biswas";
    strcat(str1,str2);
    printf("str1=%s\n",str1);
}