#include<stdio.h>
int main()
{
	int n,i,j,temp,x,y;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
    	for(j=0;j<(n-i);j++)
    	{
    		if(a[j]>a[j+1])
    		{
    			temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
	if((n%2)!=0)
	{
	    x=(n+1)/2;
	    printf("%d",a[x-1]);
	}
	else
	{
	    y=n/2;
	    printf("%d",a[y-0]);
	}
}