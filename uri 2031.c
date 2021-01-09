#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,j,k;
    char aa[20];
    char bb[20];
    char s[20]="ataque";
    char r[20]="pedra";
    char p[20]="papel";

    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%s %s",aa,bb);
    if(strcmp(aa,s)==0 && strcmp(bb,r)==0)
        printf("Jogador 1 venceu\n");
    else if(strcmp(bb,s)==0 && strcmp(aa,r)==0)
        printf("Jogador 2 venceu\n");
    else if(strcmp(aa,r)==0 && strcmp(bb,p)==0)
        printf("Jogador 1 venceu\n");
    else if(strcmp(bb,r)==0 && strcmp(aa,p)==0)
        printf("Jogador 2 venceu\n");
    else if(strcmp(aa,p)==0 && strcmp(bb,s)==0)
        printf("Jogador 2 venceu\n");
    else if(strcmp(aa,s)==0 && strcmp(bb,p)==0)
        printf("Jogador 1 venceu\n");
    else if(strcmp(aa,p)==0 && strcmp(bb,p)==0)
        printf("Ambos venceram\n");
    else if(strcmp(aa,r)==0 && strcmp(bb,r)==0)
        printf("Sem ganhador\n");
    else if(strcmp(aa,s)==0 && strcmp(bb,s)==0)
        printf("Aniquilacao mutua\n");
    }
    return 0;
}
