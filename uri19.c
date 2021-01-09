#include<stdio.h>
int main()
{
    int a,i,j;
    int ar[3]={3600,60,1};
    int arr[3];
    scanf("%d",&a);
    for(i=0; i<3; i++)
    {
        arr[i]=a/ar[i];
        a=a%ar[i];
    }
    printf("%d:%d:%d\n",arr[0],arr[1],arr[2]);
    return  0;
}
