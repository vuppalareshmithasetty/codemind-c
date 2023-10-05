#include<stdio.h>
int main()
{
    int a[100],i,n,c=0,avg,f=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=c+a[i];
    }
    avg=c/n;
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            f=f+1;
        }
    }
    if(f==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}