
#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,n=0,m;
    while( scanf("%d%d",&a,&b)){
        if(a==0 && b==0)
            break;
        n=n+1;
        int ar[a+1];
        int br[b+1];
        for(i=0;i<a;i++){
            scanf("%d",&ar[i]);
        }
        for(i=0;i<a;i++){
            for(j=i+1;j<a;j++){
                if(ar[i]>ar[j]){
                    m=ar[i];
                    ar[i]=ar[j];
                    ar[j]=m;
                }
            }
        }
        for(i=0;i<b;i++){
            scanf("%d",&br[i]);
        }
        printf("CASE# %d:\n",n);
        for(i=0;i<b;i++){
            k=0;
            for(j=0;j<a;j++){
                if(br[i]==ar[j]){
                    k=j+1;
                    break;
                }
            }
            if(k!=0)
                printf("%d found at %d\n",br[i],k);
            else
                printf("%d not found\n",br[i]);
        }
    }
    return 0;
}
