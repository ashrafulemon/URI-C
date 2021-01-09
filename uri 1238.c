#include<stdio.h>
#include<string.h>
int main ()
{
    int a,b,c,d,e,i,j,k;

    char cr[100];
    scanf("%d%*c",&a);
    for (j=0;j<a;j++)
    {
        char ar[100];
        char br[100];
        scanf("%s%s%*c",ar,br);
        //printf("%s %s\n",ar,br);
        b=strlen(ar);
        c=strlen(br);
        d=(c-b);
        if(b>c)
            e=c;
        if(c>=b)
            e=b;
       // printf("%d %d\n",b,c);
        for(i=0;i<e;i++){
            printf("%c%c",ar[i],br[i]);
        }
        if(d>0){
        for(i=b;i<c;i++)
          printf("%c",br[i]);
        }
        if(d<0){
        for(i=c;i<b;i++)
            printf("%c",ar[i]);
        }
        printf("\n");
    }
    return 0;
}
