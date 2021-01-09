#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    char b[101];
    char c[101];
    char d[100]="a";
    //gets(a);
   // gets(b);
   // gets(c);
    scanf("%[^\n]\n",a);
    scanf("%[^\n]\n",b);
    scanf("%[^\n]",c);

    strncpy(d,a,10);
    strncat(d,b,10);
    strncat(d,c,10);

    printf("%s%s%s\n",a,b,c);
    printf("%s%s%s\n",b,c,a);
    printf("%s%s%s\n",c,a,b);
    printf("%s\n",d);
    return 0;
}
