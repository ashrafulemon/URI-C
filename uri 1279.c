#include<stdio.h>
int main()
{
    long long int  a,b,c=0,d=0,i,j,k=0;
    while(scanf("%lld",&a)!=EOF){
    if(d==1){
        printf("\n");
    }
    if( a%4==0 && (a%100!=0 || a%400==0)){
        c=1;
        printf("This is leap year.\n");
        k=1;
    }
    if(a%15==0){
        c=1;
        printf("This is huluculu festival year.\n");
    }
    if(a%55==0 && k==1){
        printf("This is bulukulu festival year.\n");
    }
    if(c==0){
        printf("This is an ordinary year.\n");
    }
    d=1;
    c=0;
    k=0;
    }
    return 0;
}

