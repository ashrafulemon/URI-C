#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d",&a,&b);
    if(a>=0 && b>=0 && a<=24 && b<=24);
 {
    if(a<b){
        c=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",c);
    }
    else if(a==b){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(a>b)
    {
        c=24-a;
        d=c+b;
        printf("O JOGO DUROU %d HORA(S)\n",d);
    }
 }
}
