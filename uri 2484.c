#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    char ar[1000];
    while(scanf("%s%*c",ar)!=EOF){
        //printf("\n");
        a=strlen(ar);
        b=a;
        for(i=0;i<a;i++){
            for(j=0;j<i;j++){
                printf(" ");
            }
            for(j=0;j<b;j++){
                printf("%c",ar[j]);
                if(j!=b-1)
                    printf(" ");
                if(j==b-1){
                    printf("\n");
                    b=b-1;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
