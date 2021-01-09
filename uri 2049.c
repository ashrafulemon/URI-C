
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,l;
    char ar[1000];
    char br[300000];
    i=1;
    while(scanf("%s",ar)){
        if(strlen(ar)==1 && strcmp(ar,"0")==0 )
            break;
        if(i!=1)
            printf("\n");
        scanf("%s",br);
        b=(int )strstr(br,ar);
        printf("Instancia %d\n",i);
        if(b==0)
            printf("falsa\n");
        else
            printf("verdadeira\n");
        i++;
    }
    return 0;
}
