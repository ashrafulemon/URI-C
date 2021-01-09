///i+=5
#include<stdio.h>
int main()
{
    int a,b,c,d=0,i,j,k;
    int ar[10000];
    scanf("%d",&a);
    for(i=0;i<10000;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>0)
        {
            c=ar[i];
            break;
        }
    }
    k=c+a;
    for(i=a;i<k;i++)
    {
        d=d+i;
    }
    printf("%d\n",d);
    return 0;

}
