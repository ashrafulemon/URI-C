#include<stdio.h>
int main()
{
    int a,b,c,i,k,j;
    scanf("%d",&a);
    j=a;
    int ar[a];
    for(i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++){
        if(ar[i]==1)
            j=j-1;
    }
    printf("%d\n",j);
    return 0;
}
