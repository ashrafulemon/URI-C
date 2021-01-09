
#include<stdio.h>
#include<string.h>
int main()
{
    int a,v,b,c,d,i,j,k;
    scanf("%d",&v);
    for(i=0;i<v;i++){
        scanf("%d%*c",&b);
        double dd[b];
        char ar[b][1000];
        char br[b][1000];
        for(j=0;j<b;j++){
            scanf("%s",ar[j]);
        }
        for(j=0;j<b;j++){
            int a=0,p=0,m=0,l=0;
            scanf("%s",br[j]);
            l=strlen(br[j]);
            for(k=0;k<l;k++){
                if(br[j][k]=='A')
                    a+=1;
                if(br[j][k]=='P')
                    p+=1;
                if(br[j][k]=='M')
                    m+=1;
            }
           // printf("%d  %d %d %d\n",l,a,p,m);
            l=l-m;
            dd[j]=(100.00*p)/l;
         //   printf("%.2lf\n",dd[j]);
        }
        int t=0;
        for(j=0;j<b;j++){
            if(dd[j]<75){
                if(t==1)
                 printf(" ");
                printf("%s",ar[j]);
                t=1;
            }
        }
        printf("\n");

    }
    return 0;
}
