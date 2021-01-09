#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d%d",&a,&b)){
        if(a==0 && b==0)
            break;
        printf("%d\n",a+b);
    }
    return 0;
}

