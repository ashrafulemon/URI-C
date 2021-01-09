
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    double d;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        d=0;
        scanf("%d",&b);
        double ar[b+1];
        char cr[b+1][55];
        for(j=0;j<b;j++){
            scanf("%s%lf",cr[j],&ar[j]);
        }
        scanf("%d",&c);
        double arr[c+1];
        char crr[c+1][55];
        for(j=0;j<c;j++){
            scanf("%s%lf",crr[j],&arr[j]);
        }
        for(j=0;j<c;j++){
            for(k=0;k<b;k++){
                if(strcmp(crr[j],cr[k])==0){
                    d=d+(arr[j]*ar[k]);
                }
            }
        }
        printf("R$ %.2lf\n",d);
    }
    return 0;
}
