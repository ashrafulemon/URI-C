#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,c,d,i,j,k;
    char br[100];
    double e;
    scanf("%d%*c",&a);
    for(i=0;i<a;i++){
            d=0;
            e=0;
        scanf("%s",br);
        int ar[1000];
        for(j=0;j<3;j++){
            scanf("%d",&ar[j]);
        }
        if(strcmp(br,"min")==0){
        for(j=0;j<3;j++){
            for(k=j;k<3;k++){
                if(ar[j]>ar[k]){
                    c=ar[k];
                    ar[k]=ar[j];
                    ar[j]=c;
                }
            }
        }
            printf("Caso #%d: %d\n",i+1,ar[0]);
        }
        else if(strcmp(br,"mean")==0){
            d=(ar[0]+ar[1]+ar[2])/3;
            printf("Caso #%d: %d\n",i+1,d);
        }
        else if(strcmp(br,"eye")==0){
                e=(ar[0]*30.00)/100;
                e=e+((ar[1]*59.00)/100);
                e=e+((ar[2]*11.00)/100);
                e=floor(e);
                printf("Caso #%d: %.lf\n",i+1,e);

        }
        else if(strcmp(br,"max")==0){
          for(j=0;j<3;j++){
            for(k=j;k<3;k++){
                if(ar[j]>ar[k]){
                    c=ar[k];
                    ar[k]=ar[j];
                    ar[j]=c;
                }
            }
        }
            printf("Caso #%d: %d\n",i+1,ar[2]);
        }
       // printf("aaa\n");
    }
    return 0;
}
