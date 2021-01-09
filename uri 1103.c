#include<stdio.h>
int main()
{
    int a,b,c,d,i,j,k,n;
    while(1){
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a==0 &&b==0&& c==0&&d==0)
            break;
        i=(a*60)+b;
        j=(c*60)+d;
        if(a>c){
          i=-(24*60-i);
        }
        if(a==c && b>d){
          i=-(24*60-i);
        }
        k=j-i;
        printf("%d\n",k);
    }
    return 0;
}
