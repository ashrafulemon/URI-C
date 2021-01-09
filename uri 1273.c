#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,e=0,i,j,k;
    while(scanf("%d%*c",&a)){
        if(a==0)
        break;
        b=a;
        c=0;
        d=0;
        char ar[a][1000];
        int br[a];
        while(a--){
            scanf("%s",ar[a]);
            br[a]=strlen(ar[a]);
            if(br[a]>c)
                c=br[a];
        }
        if(e==1)
            printf("\n");
        e=1;
        while(b--){
            d=c-br[b];
            while(d--)
                 printf(" ");
            printf("%s\n",ar[b]);
        }
    }
    return 0;
}

