#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d",&a)){
        if(a==0)
            break;
        c=0;
        char ar[1000];
        for(i=0;i<a;i++){
        scanf("%d%*c",&b);
        scanf("%[^\n]",ar);
        if(strcmp(ar,"suco de laranja")==0){
            c=c+b*120;
        }
        else if(strcmp(ar,"morango fresco")==0){
            c=c+b*85;
        }
        else if(strcmp(ar,"mamao")==0){
            c=c+b*85;
        }
        else if(strcmp(ar,"goiaba vermelha")==0){
            c=c+b*70;
        }
         else if(strcmp(ar,"manga")==0){
            c=c+b*56;
        }
        else if(strcmp(ar,"laranja")==0){
            c=c+b*50;
        }
        else if(strcmp(ar,"brocolis")==0){
            c=c+b*34;
        }
        }
        if(c>130){
            c=c-130;
            printf("Menos %d mg\n",c);
        }
        else if(c<110){
            c=110-c;
            printf("Mais %d mg\n",c);
        }
        else if(c>=110 && c<=130)
            printf("%d mg\n",c);
    }
    return 0;
}
