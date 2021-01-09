
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,d=0,e,f,j,k,l=0;
    double dd,ee;
    int ar[100];
    scanf("%d%d",&a,&b);
    c=b-a;
    for(i=0;i<30;i++){
        scanf("%d",&ar[i]);
        d=d+ar[i];
    }
    dd=(double)d;
    dd=ceil(dd/30);
    //printf("%lf\n",dd);
    //printf("%d\n",c);
    ee=(c/dd);
    printf("%.2lf\n",ee);
    return 0;
}
