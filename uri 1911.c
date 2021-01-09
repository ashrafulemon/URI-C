#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a,b,c,d,e,f,g,i,j,k;
    while(scanf("%d",&a)){
        c=0;
        if(a==0)
            break;
        char ar[a+1][100];
        char arr[a+1][100];
        char br[a+1][100];
        char brr[a+1][100];
        for(i=0;i<a;i++){
            scanf("%s%s",ar[i],br[i]);
        }
        scanf("%d",&b);
        for(i=0;i<b;i++){
            scanf("%s%s",arr[i],brr[i]);
        }
        for(i=0;i<b;i++){
            for(j=0;j<a;j++){
                if(strcmp(arr[i],ar[j])==0){
                  e=strlen(brr[i]);
                  f=strlen(br[j]);
                  d=0;
                  if(e!=f){
                    d=abs(e-f);
                    if(e>f){
                       g=e;
                       e=f;
                       f=g;
                    }
                  }
                  for(k=0;k<e;k++){
                    if(brr[i][k]!=br[j][k]){
                        d=d+1;
                        if(d>1){
                            c=c+1;
                            break;
                        }
                    }
                  }
                  break;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;

}
