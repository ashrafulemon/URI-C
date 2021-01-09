#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=800 && a>=0)
        printf("1\n");
    if(a<=1400&& a>800)
        printf("2\n");
    if(a<=2000&& a>1400)
        printf("3\n");
    return 0;
}
