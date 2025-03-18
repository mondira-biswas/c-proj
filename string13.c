#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Mondira Biswas";
    strupr(str);
    printf("Str=%s\n", str);
    strlwr(str);
    printf("Str=%s\n",str);
}