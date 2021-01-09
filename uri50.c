#include<stdio.h>
#include<string.h>
int main()
{
    int arr[8]={61,71,11,21,32,19,27,31};
    char ar[8][100]={"Brasilia,Salvador,Sao Paulo,Rio de Janeiro,Juiz de Fora,Campinas,Vitoria,Belo Horizonte"};
    char arrr[100][100]={"hi"};
    int a,b,i;
    scanf("%d",&a);
    //if(a == arr)
{
    for (i=0; i<8;i++)
    {
        if(arr[i]==a)
        {
        printf("%s",ar[i]);
        }
    }
}
  //  else
     //   printf("DDD nao cadastrado\n");

    return 0;
}
