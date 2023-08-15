#include<stdio.h>
int main(){
    int r;
    scanf("%d",&r);
    if(r<=199){
        float ans=r*1.20;
        float s =ans+100;
        printf("%.2f",s);
    }
    else if(r>=200 && r<400){
        float ans=r*1.50;
        float s =ans+100;
        printf("%.2f",s);
    }
    else if(r>=400 && r<600){
        float ans=r*1.80;
        float s =ans+(ans*0.15);
        printf("%.2f",s);
    }
    else{
        float ans=r*2.00;
        float s =ans+(ans*0.15);
        printf("%.2f",s);
    }
}