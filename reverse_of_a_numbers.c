#include<stdio.h>
int main()
{
int n,rn= 0;
scanf("%d", &n); 
while (n != 0)
{
rn= rn*10;
rn=rn+n%10;
n=n/10;
}
printf("%d",rn);
}