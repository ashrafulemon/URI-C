#include<stdio.h>
int main()
{
    int a=2002,b,c,i,j,k;
    int ar[1000];
    int arr[1000];
    for(i=0;i<1000;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]==a)
        {
            printf("Acesso Permitido\n");
            break ;
        }
        printf("Senha Invalida\n");
    }
    return 0;
}
