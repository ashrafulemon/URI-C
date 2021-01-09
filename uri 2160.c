#include<stdio.h>
#include<string.h>
//#define gets() _gets()
int main()
{
    int a,b,c;
    char ch[510];
    //gets(ch);
    scanf("%[^\n]",ch);
    a=strlen(ch);
    if(a>80)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
