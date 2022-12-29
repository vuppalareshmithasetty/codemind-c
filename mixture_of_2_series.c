#include<stdio.h>
int main()
{
    int n,k1=0,k2=0,i;
    scanf("%d",&n);
    for(i=1;i<=(n+1);i++)
    {
        if(i%2!=0)
        {
            int a;
            a=(2*k1);
            printf("%d ",a);
            k1++;
        }
        else
        {
            int b;
            b=0+k2;
            printf("%d ",b);
            k2++;
        }
    }
}