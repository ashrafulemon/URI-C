#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    int i,j,k;
    char ar[1000];
    scanf("%lf%*c",&a);
    for(i=0;i<a;i++){
        c=0;
        d=0;
        e=0;f=0;
        scanf("%s",ar);
        scanf("%lf",&b);
        double br[100];
        //printf("%s %d\n",ar,b);
        for(j=0;j<7;j++){
            scanf("%lf",&br[j]);
            c=c+br[j];
        }
        for(j=0;j<7;j++){
            for(k=j;k<7;k++){
                if(br[j]>br[k]){
                    d=br[k];
                    br[k]=br[j];
                    br[j]=d;
                }
            }
        }
       // printf("%lf %lf",br[0],br[6]);
        c=c-br[6]-br[0];
        c=c*b;
        printf("%s %.2lf\n",ar,c);
    }
    return 0;
}
