#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d%d",&a,&b)!=EOF){
        c=0;
        for(i=0;i<a;i++){
            scanf("%d%d",&j,&k);
            if(k==0 && j==b)
                c+=1;
        }
        printf("%d\n",c);
    }
    return 0;
}
