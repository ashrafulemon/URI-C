
#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k;
    scanf("%d\n%d\n%d",&a,&b,&c);
    i=b*2+c*4;
    j=a*2+c*2;
    k=a*4+b*2;
    if(i==j && i==k)
    printf("%d\n",i);
    else if(i<=j && i<=k)
    printf("%d\n",i);
    else if(k<=j && k<=i)
    printf("%d\n",k);
    else if(j<=i && j<=k)
    printf("%d\n",j);
    return 0;
}
