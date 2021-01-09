#include<stdio.h>
int main()
{
    int i,j,v,t;
    float a ,d;
    while(scanf("%d",&v)!=EOF)
    {
        scanf("%d",&t);
        if(t==0){
           d=0;
        }
       else if(t!=0){
        a=(v*1.00)/t;
        t=t*2;
        d=(a*t*t)/2;
       }
        printf("%.f\n",d);
    }
    return 0;
}
