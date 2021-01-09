#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,d;
    char ar[1000];
    char br[100]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    scanf("%d%*c",&a);
    for(i=0;i<a;i++){
        scanf("%s",ar);
        scanf("%d",&b);
        c=strlen(ar);
        for(j=0;j<c;j++){
            for(k=0;k<26;k++){
                if(ar[j]==br[k]){
                    d=k-b;
                    if(d>=0)
                        printf("%c",br[d]);
                    else
                        printf("%c",br[26+d]);
                    break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
