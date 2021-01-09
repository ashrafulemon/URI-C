#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,j,k,l,e;

    char br[100]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    scanf("%d",&a);
    for(i=0;i<a;i++){
        char ar[1000];
        scanf("%d%*c",&b);
        c=0;
        for(j=0;j<b;j++){
            scanf("%s%*c",ar);
            e=strlen(ar);
            for(k=0;k<e;k++){
                for(l=0;l<26;l++){
                    if(ar[k]==br[l]){
                     c=c+k+l+j;
                     break;
                    }
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
