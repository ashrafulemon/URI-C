#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k;
    scanf("%d",&a);
    if(a>0 && a<=10000){
    for(i=0;i<a;i++){
        scanf("%d%d%d",&b,&c,&d);
        if(b>0 && b<=5000 && c>0 && c<=5000 && d>0 && d<=5000 ){
         if(b>=200 && b<=300 && c>=50 && d>=150)
         {
             printf("Sim\n");
         }
         else
             printf("Nao\n");
        }
    }
    }
    return 0;
}
