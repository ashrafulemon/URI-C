
#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,c,i,j,k,e,f,gg;
    int b,d;
    char ar[100000];
    i=1;
    while(scanf("%s",ar)!=EOF){
    char ch[1000];
    scanf("%s",ch);
    b=(int)(ch);
    d=(int)strstr(ch,ar);
    gg=(int)strstr(ch,ar);


    printf("Caso #%lld:\n",i);
    if(d!=0){
        d=d-b+1;
       // printf("Qtd.Subsequencias: %lld\n",b);
        printf("Qtd.Subsequencias: %lld\n",d);
    }
    else
        printf("Nao existe subsequencia\n");
    i++;
    }
    return  0;
}
