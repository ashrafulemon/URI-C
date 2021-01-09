
#include<stdio.h>
int main()
{
    int a,b,c,i,j,k=0;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++){
        scanf("%d",&ar[i]);
        if(i>0 && ar[i]==ar[i-1])
            k=1;
        if(i>1 && ar[i]>=ar[i-1] && ar[i-1]>=ar[i-2])
            k=1;
        if(i>1 && ar[i]<=ar[i-1] && ar[i-1]<=ar[i-2])
            k=1;
    }
    if(k==0)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}
