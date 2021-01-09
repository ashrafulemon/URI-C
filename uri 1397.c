#include<stdio.h>
int main()
{
    int a,b,c,i,k,j;
    while(scanf("%d",&c)){
        if(c==0)
            break;
        k=0;
        j=0;
        for(i=0;i<c;i++){
            scanf("%d%d",&a,&b);
            if(a>b)
                k++;
            if(a<b)
                j++;
        }
        printf("%d %d\n",k,j);
    }
    return 0;
}
