#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    char ch[20];
    char d[20]="vertebrado";
    char e[20]="invertebrado";
    char f[20]="ave";
    char g[20]="mamifero";
    char h[20]="inseto";
    char l[20]="anelideo";
    char m[20]="carnivoro";
    char n[20]="onivoro";
    char o[20]="herbivoro";
    char p[20]="hematofago";
    scanf("%s",ch);
    if( strcmp(ch,d)==0)
    {
       scanf("%s",ch);
       if( strcmp(ch,f)==0)
       {
           scanf("%s",ch);
           if( strcmp(ch,m)==0)
           {
               printf("aguia\n");
           }
           if( strcmp(ch,n)==0)
           {
               printf("pomba\n");
           }

       }
       if( strcmp(ch,g)==0)
        {
           scanf("%s",ch);
           if( strcmp(ch,n)==0)
           {
               printf("homem\n");
           }
           if( strcmp(ch,o)==0)
           {
               printf("vaca\n");
           }

        }
    }


    if(strcmp(ch,e)==0)
    {
       scanf("%s",ch);
       if( strcmp(ch,h)==0)
       {
           scanf("%s",ch);
           if( strcmp(ch,p)==0)
           {
               printf("pulga\n");
           }
           if( strcmp(ch,o)==0)
           {
               printf("lagarta\n");
           }

       }
       if( strcmp(ch,l)==0)
        {
           scanf("%s",ch);
           if( strcmp(ch,p)==0)
           {
               printf("sanguessuga\n");
           }
           if( strcmp(ch,n)==0)
           {
               printf("minhoca\n");
           }

        }

    }
    return 0;
}
