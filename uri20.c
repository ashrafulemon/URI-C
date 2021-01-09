#include<stdio.h>
int main()
{
    int a,i,j;
    int ar[3]={365,30,1};
    int arr[3];
    scanf("%d",&a);
    for(i=0;i<3;i++)
    {
        arr[i]=a/ar[i];
        a=a%ar[i];
    }
    printf("%d ano(s)\n",arr[0]);
    printf("%d mes(es)\n",arr[1]);
    printf("%d dia(s)\n",arr[2]);

return 0;
}
