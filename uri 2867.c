#include<stdio.h>
#include<math.h>
int main()
{
    double b,c,j,k,n;
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%lf%lf",&b,&c);
        j=log10(b);
        k=floor(j*c);
        printf("%.lf\n",k+1);
    }
    return 0;
}
