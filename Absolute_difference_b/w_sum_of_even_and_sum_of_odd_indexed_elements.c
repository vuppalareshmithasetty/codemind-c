#include<stdio.h>
int main(){
    int a[100],i,n,s=0,c=0,d;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            c=c+a[i];
        }
    }
    if(c>s)
    {
        d=c-s;
    }
    else
    {
     d=s-c;   
    }
    printf("%d",d);
}