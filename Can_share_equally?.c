#include<stdio.h>
int main()
{
    int x,y,n;
    scanf("%d%d",&x,&y);
    n=x+2*y;
    if(x%2==0 && (x>0 || y%2==0))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}