#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d%d",&a,&b)!=EOF){
        int ar[a];
        int br[b];
        for(i=0;i<a;i++){
            scanf("%d",&ar[i]);
        }
        for(i=0;i<a;i++){
            for(j=i;j<a;j++){
                if(ar[i]<ar[j]){
                    c=ar[j];
                    ar[j]=ar[i];
                    ar[i]=c;
                }
            }
        }
        for(i=0;i<b;i++){
            scanf("%d",&br[i]);
        }
        for(i=0;i<b;i++){
            for(j=0;j<=a;j++){
                if(br[i]==j){
                    printf("%d\n",ar[j-1]);
                    break;
                }
            }
        }

    }
    return 0;
}
