#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c=0,i,j,k,m;
    char br[30]={" abcdefghijklmnopqrstuvwxyz"};
    while(scanf("%d%*c",&a)!=EOF){
         char ar[100000];
         for(i=0;i<a;i++){
            k=0;
            c=0;
            scanf("%[^\n]%*c",ar);
            b=strlen(ar);
            m=b;
            for(j=0;j<b;j++){
                if(ar[j]==' '){
                    k=k+1;
                    if(c==0){
                        m=j;
                        c=1;
                    }
                }
            }
            m=k*3+m;
            printf("%c\n",br[m]);
         }
    }
    return 0;
}

