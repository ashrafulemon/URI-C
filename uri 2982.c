#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,c,i,j=0,k=0;
    char g[5]="G";
    char v[5]="V";
    char ch[10];
    scanf("%lld",&a);
    if(a>=1 && a<=100000){
    for(i=1 ;i<=a ;i++){
        scanf("%s%lld",ch,&b);
       if(b>=1&& b<=100000){
        if(strcmp(v,ch)==0){
            j=j+b;
          }
        else if(strcmp(g,ch)==0){
           k=k+b;
       }
       }
    }
    if(j>k)
        printf("A greve vai parar.\n");
    else
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    }
    return 0;
}
