#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    if(n<=2)
    {
        printf("The pattern is not possible");
    }
    else
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    for(int k=n-1;k>=1;k--)
    {
        for(int l=1;l<=k;l++)
        {
            printf("*");
        }
        printf("
");
    }
    }
}