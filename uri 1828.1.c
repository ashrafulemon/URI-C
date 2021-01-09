#include<stdio.h>
#include<string.h>
int main()
{
    int n,c,i,j,k;
    scanf("%d",&n);
    char a[100];
    char b[100];
    char ro[100] ="pedra";
    char pa[100]= "papel";
    char si[100]="tesoura";
    char li[100]="lagarto";
    char sp[100]="Spock";
    for (i=1;i<=n;i++)
    {
        scanf("%s%s",a,b);
    if( (strcmp(a,si)==0 &&((strcmp(b,pa)==0)||strcmp(b,li)==0)) || (strcmp(a,pa)==0 &&((strcmp(b,ro)==0)||strcmp(b,sp)==0)) || (strcmp(a,ro)==0 &&((strcmp(b,li)==0)||strcmp(b,si)==0)) || (strcmp(a,li)==0 &&((strcmp(b,sp)==0)||strcmp(b,pa)==0)) || (strcmp(a,sp)==0 &&((strcmp(b,si)==0)||strcmp(b,ro)==0)) ){
            printf("Caso #%d: Bazinga!\n",i);
        }
    else if((strcmp(a,si)==0 &&((strcmp(b,sp)==0)||strcmp(b,ro)==0)) ||(strcmp(a,pa)==0 &&((strcmp(b,si)==0)||strcmp(b,li)==0)) || (strcmp(a,ro)==0 &&((strcmp(b,pa)==0)||strcmp(b,sp)==0)) || (strcmp(a,li)==0 &&((strcmp(b,ro)==0)||strcmp(b,si)==0)) || (strcmp(a,sp)==0 &&((strcmp(b,li)==0)||strcmp(b,pa)==0))){
            printf("Caso #%d: Raj trapaceou!\n",i);
        }
    else if( (strcmp(a,ro)==0 && strcmp(b,ro)==0) || (strcmp(a,si)==0 && strcmp(b,si)==0) || (strcmp(a,pa)==0 && strcmp(b,pa)==0) || (strcmp(a,li)==0 && strcmp(b,li)==0) || (strcmp(a,sp)==0 && strcmp(b,sp)==0) ){
            printf("Caso #%d: De novo!\n",i);
        }
    }
    return 0;
}
