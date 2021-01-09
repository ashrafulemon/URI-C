#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j,k;
    char ar[1000];
    scanf("%[^\n]",ar);
    b=strlen(ar);
    if(b<=140)
        printf("TWEET\n");
    else
        printf("MUTE\n");

    return 0;
}
