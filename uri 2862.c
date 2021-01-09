#include<stdio.h>
int main()
{
    long long int a,b,c,i,j;
    scanf("%lld",&a);
    for(i=0;i<a;i++){
    scanf("%lld",&b);
    if(b<=8000)
       printf("Inseto!\n");
    if(b>8000)
        printf("Mais de 8000!\n");
    }
    return 0;
}
