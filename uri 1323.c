#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d",&a)){
        if(a==0)
            break;
        b=0;
        for(i=1;i<=a;i++){
            b=b+(i*i);
        }
        printf("%d\n",b);
    }
    return 0;
}
