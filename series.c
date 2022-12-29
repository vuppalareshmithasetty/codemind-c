#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=0,k2=0,i;
    scanf("%d",&n);
    printf("0 ");
    for(i=1;i<=n-1;i++)
    {
        if(i%2==0)
        {
           int a;
           a=pow(2,k1);
           printf("%d ",a);
           k1++;
        }
        else
        {
            int b;
            b=pow(3,k2);
            printf("%d ",b);
            k2++;
        }
    }
}