#include<stdio.h>
int main()
{
    int i,j;
    int  n,a,b;
    double N,c;
    int ar[6]={10000,5000,2000,1000,500,200};
    int arr[6];
    int ar1[6]={100,50,25,10,5,1};
    int arr1[6];
    scanf("%lf",&N);
    c=100*N;
    n=c;
    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        arr[i]=n/ar[i];
        n=n%ar[i];
    }
    printf("%d nota(s) de R$ 100.00\n",arr[0]);
    printf("%d nota(s) de R$ 50.00\n",arr[1]);
    printf("%d nota(s) de R$ 20.00\n",arr[2]);
    printf("%d nota(s) de R$ 10.00\n",arr[3]);
    printf("%d nota(s) de R$ 5.00\n",arr[4]);
    printf("%d nota(s) de R$ 2.00\n",arr[5]);
    printf("MOEDAS:\n");

    for(j=0;j<6;j++)
    {
        arr1[j]=n/ar1[j];
        n=n%ar1[j];
    }
    printf("%d moeda(s) de R$ 1.00\n",arr1[0]);
    printf("%d moeda(s) de R$ 0.50\n",arr1[1]);
    printf("%d moeda(s) de R$ 0.25\n",arr1[2]);
    printf("%d moeda(s) de R$ 0.10\n",arr1[3]);
    printf("%d moeda(s) de R$ 0.05\n",arr1[4]);
    printf("%d moeda(s) de R$ 0.01\n",arr1[5]);

    return 0;

}

