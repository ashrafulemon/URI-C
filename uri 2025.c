
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,j,k;
    scanf("%d%*c",&a);
    char ar[1000];
    for(i=0;i<a;i++){
        scanf("%[^\n]%*c",ar);
        //printf("%s\n",ar);
        c=0;
        d=0;
        b=strlen(ar);
        for(j=0;j<b;j++){
            if(ar[j]=='.'){
                c=0;
                d=0;
                printf(".");
            }
            if(ar[j]==' '|| c==1){
                c=1;
            }
            if(ar[j]!=' ' && ar[j]!='.' && d==0){
                printf("Joulupukki");
                d=1;
                c=0;
            }
            if(c==1)
                 printf("%c",ar[j]);

        }
        printf("\n");
    }
    return 0;
}
