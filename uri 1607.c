#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,m,n,o,p;
    char ch[30]={"abcdefghijklmnopqrstuvwxyz"};
    scanf("%d%*c",&a);
    for(i=0;i<a;i++){
        o=0;
        char ar[a][10000];
        char br[a][10000];
        scanf("%s%s",ar[i],br[i]);
        b=strlen(ar[i]);
        c=strlen(br[i]);
        if(c<b)
            b=c;
       // printf("%s %s\n",ar[i],br[i]);
        for(j=0;j<b;j++){
            for(k=0;k<26;k++){
                if(ar[i][j]==ch[k]){
                    m=k;
                   // break;
                }
                if(br[i][j]==ch[k]){
                    n=k;
                }
            }
            p=n-m;
            if(m>n)
                p=n-m+26;
           // printf("%d ",p);
            o=o+p;
        }
        printf("%d\n",o);
    }
    return 0;
}
