//strlen without length
#include<stdio.h>
int main()
{
    char s[]="Mondira Biswas";
    int i=0,length=0;
    while(s[i]!='\0')
    {
        i++;
        length++;
    }
    printf("Length=%d\n",length);
}