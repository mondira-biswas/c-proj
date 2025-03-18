#include<stdio.h>
int main()
{
    char str[100],ch;
    int i,vowel,consonant,digit,word,other;
    printf("Enter a string=");
    gets(str);
    i=vowel=consonant=word=digit=other=0;
    while((ch=str[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        vowel++;
        else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        consonant++;
        else if(ch>='0' && ch<='9')
        digit++;
        else if(ch==' ')
        word++;
        else 
        other++;

        i++;
    }
    word++;
    printf("VOwels=%d\nconsonant=%d\nwords=%d\ndigits=%d\nothers=%d\n",vowel,consonant,word,digit,other);
}