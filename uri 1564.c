#include<stdio.h>
int main()
{
    int a,b,c,d;
    while(scanf("%d",&a)!=EOF)
    {
        if(a==0)
        {
            printf("vai ter copa!\n");
        }
        else
            printf("vai ter duas!\n");
    }
    return 0;
}
