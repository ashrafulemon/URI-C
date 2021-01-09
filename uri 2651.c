
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c;
    char ar[1000];
    scanf("%s",ar);
    a=(int)strstr(ar,"zelda");
    printf("%d\n",a);
    if(strstr(ar,"zelda")==NULL && strstr(ar,"zelda")==NULL )
       printf("Link Tranquilo\n");
    else
       printf("Link Bolado\n");

    return 0;
}
