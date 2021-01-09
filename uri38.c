#include<stdio.h>
int main()
{
    int a,b,i;
    float t;
    int ar[5]={1,2,3,4,5};
    float arr[5]={4.00,4.50,5.00,2.00,1.50};
    scanf("%d%d",&a,&b);
    for(i=0;i<5;i++)
    {
        if(a==ar[i])
        {
            t=arr[i]*b;
            printf("Total: R$ %.2f\n",t);
        }
    }
    return 0;
}
