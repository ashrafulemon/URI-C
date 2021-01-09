#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,l=0;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&i,&j,&k);
    if(a<i)
        l=i-a;
    if(b<j)
        l=l+j-b;
    if(c<k)
        l=l+k-c;
    printf("%d\n",l);
    return 0;
}
