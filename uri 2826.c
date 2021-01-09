
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    char ar[100];
    char br[100];
    scanf("%s%s",ar,br);
    if(strcmp(ar,br)<=0)
        printf("%s\n%s\n",ar,br);
    else
        printf("%s\n%s\n",br,ar);
    return 0;
}
