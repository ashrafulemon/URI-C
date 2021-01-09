#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    float b;
    char c;
    char ch[55];
    scanf("%d %f %c %[^\n]",&a,&b,&c,ch);
    printf("%d%.6f%c%s\n",a,b,c,ch);
    printf("%d\t%.6f\t%c\t%s\n",a,b,c,ch);
    printf("%10d%10.6f%10c%10s\n",a,b,c,ch);
    return 0;
}
