
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,d=0,j,k,l;
    scanf("%d",&a);
    char ar[100000];
    char br[12]={"0123456789"};
    for(l=0;l<a;l++){
        d=0;
        scanf("%s",ar);
        b=strlen(ar);
        for(i=0;i<b;i++){
            c=0;
            for(j=0;j<10;j++){
                for(k=0;k<b;k++){
                    if(br[j]==ar[k] && (d==1 || ar[k]!='0' )){
                        printf("%c",br[j]);
                        c=1;
                        d=1;
                        ar[k]='a';
                        break;
                    }
                }
                if(c==1)
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}
