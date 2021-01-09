#include<stdio.h>
int main()
{
    int a,b,c,i,j=0,k=0;
    scanf("%d",&a);
    if(a>=2 && a<=10000){
    int arr[a];
    for(i=0;i<a;i++)
    {
       scanf("%d",&arr[i]);
       k=k+arr[i];
    }
    if(k<100000)
    {
    for(i=1;i<a;i++)
    {
        if(arr[0]<arr[i])
        {
            j=1;
            break;
        }
    }
    if(j==0)
        printf("S\n");
    else
        printf("N\n");
    }
    }
    return 0;
}
