#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    char ar[104];
    char br[104];
    while(scanf("%s%s",ar,br)!=EOF){
       // printf("%s %s\n",ar,br);
       a=(int)(strstr(ar,br));
       if(a==0)
        printf("Nao resistente\n");
       else
        printf("Resistente\n");
    }
    return 0;
}
