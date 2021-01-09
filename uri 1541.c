#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,j;
    while(scanf("%d",&a)){
        if(a==0)
            break;
        scanf("%d%d",&b,&c);
        i=a*b;
        j=sqrt(i*100/c);
        printf("%d\n",j);
    }
    return 0;
}
