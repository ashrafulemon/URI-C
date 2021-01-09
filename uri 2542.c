#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,i,j,k;
    while(scanf("%d",&a)!=EOF){
        scanf("%d%d",&b,&c);
        int ar[b+1][a+1];
        int br[c+1][a+1];
        for(i=0;i<b;i++){
            for(j=0;j<a;j++)
                scanf("%d",&ar[i][j]);
        }
        for(i=0;i<c;i++){
            for(j=0;j<a;j++)
                scanf("%d",&br[i][j]);
        }
        scanf("%d%d",&d,&e);
        scanf("%d",&f);
        d=d-1;
        e=e-1;
        f=f-1;
        if(ar[d][f]>br[e][f])
            printf("Marcos\n");
        else if(ar[d][f]<br[e][f])
            printf("Leonardo\n");
        else if(ar[d][f]==br[e][f])
            printf("Empate\n");
    }
    return 0;
}
