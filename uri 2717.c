#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(b+c>a)
        printf("Deixa para amanha!\n");
    else
        printf("Farei hoje!\n");
    return 0;
}
