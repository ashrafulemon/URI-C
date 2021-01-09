#include<stdio.h>
int main()
{
    int a,b,c=0,i,j,k,d,x;
    scanf("%d%d",&a,&b);
    if(a>0 && b>0){
    {
        if(a>b){
            k=a;
            a=b;
            b=k;
        }
        for(i=a;i<b;i++){
          if(i%5==0){
            c=i+2;
            if(c<b){
            printf("%d\n",c);
            }
            d=i+3;
            if(d<b){
            printf("%d\n",d);
            }
          }
        }
    }
    }
    return 0;
}
