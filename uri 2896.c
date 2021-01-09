#include<stdio.h>
int main()
{
    int a,n,b,c,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a<b)
            printf("%d\n",a);
        else if(a>=b){
            c=a%b;
            j=(a/b)+c;
            printf("%d\n",j);
        }
    }
    return 0;
}
