#include<stdio.h>
int main()
{
    int a,b,c,i,j=0,k=0;
    while(scanf("%d",&a)){
        j=0;k=0;
        if(a==0)
            break;
        for(i=0;i<a;i++){
            scanf("%d",&b);
            if(b==0)
                j=j+1;
            if(b==1)
                k=k+1;
        }
        printf("Mary won %d times and John won %d times\n",j,k);
    }
    return 0;
}
