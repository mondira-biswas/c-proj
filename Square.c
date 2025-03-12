#include<stdio.h>
#include<math.h>
int main()
{
    int t,test=0;
    scanf("%d", &t);
    while(test<t)
    {
        test++;
        int l, r, d, u;
        scanf("%d %d %d %d", &l, &r, &d, &u);
        int x1 = -l;
        int y1 = 0;
        int x2 = r;
        int y2 = 0;
        int x3 = 0;
        int y3 = -d ;
        int x4 = 0 ;
        int y4 = u ;
        int d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int d2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
        int d3 = (x1 - x4) * (x1 - x4) + (y1 - y4) * (y1 - y4);
        int d4 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
        int d5 = (x2 - x4) * (x2 - x3) + (y2 - y3) * (y2 - y3);
        int d6 = (x3 - x4) * (x3 - x4) + (y3 - y4) * (y3 - y4);
        if((d1 == d6) && (d2 == d3) && (d2 == d4) && (d2 == d5) && (d1 == 2* d2) )
        {
            printf("Yes\n");
    
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}