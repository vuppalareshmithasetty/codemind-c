#include<stdio.h>
int main()
{
    int n,x,y,z,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     scanf("%d%d%d",&x,&y,&z);
     if(x<=z&& z<y)
     {
         printf("YES
");
     }
     else
     {
         printf("NO
");
     }
    }
}