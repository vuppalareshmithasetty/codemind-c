#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c,d;
    float a1,b1,c1,d1;
    scanf("%d%d",&a,&b);
    scanf("%f%f",&a1,&b1);
    c=a+b;
    d=a-b;
    printf("%d %d
",c,d);
    c1=a1+b1;
    d1=a1-b1;
    printf("%0.1f %0.1f",c1,d1);
}
