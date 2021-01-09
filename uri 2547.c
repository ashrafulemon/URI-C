#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        j=0;
        for(i=0;i<a;i++){
            scanf("%d",&k);
            if(k>=b && k<=c)
                j+=1;
        }
        printf("%d\n",j);
    }
    return 0;
}
