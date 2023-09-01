#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=((a>b)?a:b);i<=((a>b)?a:b);i--){
        if((a%i==0) && (b%i==0)){
            printf("%d",i);
            break;
        }
    }
}