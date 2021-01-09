#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    double aa;
    while(scanf("%d",&a)!=EOF){
        j=0;
        k=0;
        for(i=0;i<a;i++){
            scanf("%d%d",&b,&c);
            j=j+(b*c);
            k=k+c;
        }
        aa=(j*1.00)/(k*100.00);
        printf("%.4lf\n",aa);
    }
    return 0;
}
