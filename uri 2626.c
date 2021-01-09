#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,m,n;
    char d[100],l[100],p[100];
    char x[10]="papel";//pa
    char y[10]="pedra";//rock
    char z[10]="tesoura";//sj
    while(scanf("%s%s%s",d,l,p)){
    if(strcmp(d,x)==0){
        if(strcmp(l,x)==0){
            if(strcmp(p,x)==0)
                printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
            else if(strcmp(p,y)==0)
                printf("Putz vei, o Leo ta demorando muito pra jogar...\n")
             else if(strcmp(p,z)==0)
                printf("Urano perdeu algo muito precioso...\n")
            }
        else if(strcmp(l,y)==0){
            if(strcmp(p,x)==0)
                printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
            else if(strcmp(p,y)==0)
                printf("Os atributos dos monstros vao ser inteligencia, sabedoria...\n")
             else if(strcmp(p,z)==0)
                printf("Putz vei, o Leo ta demorando muito pra jogar...\n")

            }
        else if(strcmp(l,z)==0){
             if(strcmp(p,x)==0)
                printf("Putz vei, o Leo ta demorando muito pra jogar...\n");
            else if(strcmp(p,y)==0)
                printf("Putz vei, o Leo ta demorando muito pra jogar...\n")
             else if(strcmp(p,z)==0)
                printf("Urano perdeu algo muito precioso...\n")
            }

    }



    else if(strcmp(d,y)==0){

    }



    else if(strcmp(d,z)==0){

    }

    }
    return 0;
}
