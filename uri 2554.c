
#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,ff,gg;
    while(scanf("%d%d",&a,&b)!=EOF){
        k=0;
        ff=100;
        gg=0;
        int d[b],e[b],f[b],g[b][a],h[b][a],l[b][a],m[b][a];
        for(i=0;i<b;i++){
            k=0;
            scanf("%d/%d/%d",&d[i],&e[i],&f[i]);
            for(j=0;j<a;j++){
                scanf("%d",&g[i][j]);
                 if(g[i][j]==0)
                    k=1;
            }
            if(k==0&& gg==0){
               ff=i;
               gg=1;
            }
        }
        if(ff!=100)
            printf("%d/%d/%d\n",d[ff],e[ff],f[ff]);
        else
            printf("Pizza antes de FdI\n");
    }
    return 0;
}
