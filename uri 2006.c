
#include<stdio.h>
int main()
{
    int a,b=0,c,i,j,k,ar[6];
    scanf("%d",&a);
    for(i=0;i<5;i++){
    scanf("%d",&ar[i]);
    if(ar[i]==a)
        b=b+1;
    }
    printf("%d\n",b);
    return 0;
}
