#include<stdio.h>
int main()
{
    int n,c,i,j,k;
    scanf("%d",&n);
    char a[100];
    char b[100];
    char ro[100] ="pedra";
    char pa[100]= "papel";
    char sc[100]="tesoura";
    char li[100]="lagarto";
    char sp[100]="Spock";
    for (i=0;i<n;i++)
    {
        scanf("%s%s",a,b);
        printf("%s %s \n",a,b);
        if( (strcmp(a,ro)==0 && strcmp(b,li)==0) || (strcmp(a,ro)==0 && strcmp(b,sc)==0  ))
        {
            printf("Bazinga!\n");
        }
        else if( (strcmp(a,ro)==0 && strcmp(b,pa)==0) || (strcmp(a,ro)==0 && strcmp(b,sp)==0  ))
        {
            printf("Raj trapaceou!\n");
        }
        else if (strcmp(a,ro)==0 && strcmp(b,ro)==0)
        {
            printf("De novo!\n");
        }



        else if( (strcmp(a,pa)==0 && strcmp(b,)==0) || (strcmp(a,ro)==0 && strcmp(b,sc)==0  ))
        {
            printf("Bazinga!\n");
        }
        else if( (strcmp(a,ro)==0 && strcmp(b,pa)==0) || (strcmp(a,ro)==0 && strcmp(b,sp)==0  ))
        {
            printf("Raj trapaceou!\n");
        }
        else if (strcmp(a,ro)==0 && strcmp(b,ro)==0)
        {
            printf("De novo!\n");
        }

              if( (strcmp(a,ro)==0 && strcmp(b,li)==0) || (strcmp(a,ro)==0 && strcmp(b,sc)==0  ))
        {
            printf("Bazinga!\n");
        }
        else if( (strcmp(a,ro)==0 && strcmp(b,pa)==0) || (strcmp(a,ro)==0 && strcmp(b,sp)==0  ))
        {
            printf("Raj trapaceou!\n");
        }
        else if (strcmp(a,ro)==0 && strcmp(b,ro)==0)
        {
            printf("De novo!\n");
        }


              if( (strcmp(a,ro)==0 && strcmp(b,li)==0) || (strcmp(a,ro)==0 && strcmp(b,sc)==0  ))
        {
            printf("Bazinga!\n");
        }
        else if( (strcmp(a,ro)==0 && strcmp(b,pa)==0) || (strcmp(a,ro)==0 && strcmp(b,sp)==0  ))
        {
            printf("Raj trapaceou!\n");
        }
        else if (strcmp(a,ro)==0 && strcmp(b,ro)==0)
        {
            printf("De novo!\n");


        }
              if( (strcmp(a,ro)==0 && strcmp(b,li)==0) || (strcmp(a,ro)==0 && strcmp(b,sc)==0  ))
        {
            printf("Bazinga!\n");
        }
        else if( (strcmp(a,ro)==0 && strcmp(b,pa)==0) || (strcmp(a,ro)==0 && strcmp(b,sp)==0  ))
        {
            printf("Raj trapaceou!\n");
        }
        else if (strcmp(a,ro)==0 && strcmp(b,ro)==0)
        {
            printf("De novo!\n");
        }


    }
    return 0;
}
