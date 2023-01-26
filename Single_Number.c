#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int ar[s],i;
    for(i=0;i<s;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<s;i++)
    {
        int j=0,sum=0;
        while(j<s)
        {
            if(ar[i]==ar[j]&&i!=j)
            {
                sum++;
            }
            j++;
        }
        if(sum==0)
        {
            printf("%d",ar[i]);
        }
    }
}