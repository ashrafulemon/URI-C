#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,d,e;
    scanf("%d%*c",&a);
    for(i=0;i<a;i++){
        char ar[1010];
        char br[1010];


        scanf("%s%s",ar,br);
        //printf("%s %s\n",ar,br);
        b=strlen(ar);
        c=strlen(br);
        d=0;
        if(c>b)
            printf("nao encaixa\n");
        else if(c==b){
            if(strcmp(ar,br)==0)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
        else if(c<b){
           e=b-c;
           for(k=e,j=0; k<b,j<c; k++,j++){
               if(ar[k]!=br[j]){
                    d=1;
                    break;
               }
          }
          if(d==1)
             printf("nao encaixa\n");
          else
             printf("encaixa\n");
        }
    }
    return 0;
}
