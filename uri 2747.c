#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;
    for(i=1;i<=39;i++){
         printf("-");
    }
    printf("\n");
    for(j=1;j<=5;j++){
        for(i=1;i<=39;i++){
           if(i==1 || i==39)
              printf("|");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(i=1;i<=39;i++){
         printf("-");
    }
    printf("\n");
    return 0;
}
