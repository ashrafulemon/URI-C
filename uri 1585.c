#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d%d",&b,&c);
        j=(b*c)/2;
        printf("%d cm2\n",j);
    }
    return 0;
}
