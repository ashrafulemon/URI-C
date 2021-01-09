#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,i,j,k;
    int ar[10000];
    for(i=0;i<10000;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]>0){
        if(ar[i]==1)
        {
            a=a+1;
        }
         else if(ar[i]==2)
        {
            b=b+1;
        }
         else if(ar[i]==3)
        {
            c=c+1;
        }
         else if(ar[i]==4)
        {
            break;
        }
    }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",b);
    printf("Diesel: %d\n",c);
    return 0;

}
