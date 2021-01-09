#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,j;
    char ar[100];
    while(scanf("%[^\n]%*c",ar)!=EOF){
        //printf("%s\n",ar);
        if(strcmp(ar,"esquerda")==0)
            printf("ingles\n");
        else if(strcmp(ar,"direita")==0)
            printf("frances\n");
        else if(strcmp(ar,"nenhuma")==0)
            printf("portugues\n");
        else if(strcmp(ar,"as duas")==0)
            printf("caiu\n");
    }
    return 0;
}
