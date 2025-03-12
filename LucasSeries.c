#include<stdio.h>
void generateLucas(int numTerms)
{
    int first=2,second=1;
    printf("Lucas series up to %d terms=\n",numTerms);
    printf("%d %d ",first,second);
    for(int i=3;i<=numTerms;i++)
    {
        int next =first + second;
        first=second;
        second=next;
        printf("%d ",next);
    }
    printf("\n");
}
int main()
{
    int numTerms;
    printf("Enter the number of terms in Lucas series=");
    scanf("%d",&numTerms);
    generateLucas(numTerms);
    return 0;
}