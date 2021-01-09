#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,m,k;
    char ar[10000];
    while(scanf("%[^\n]%*c",ar)!=EOF){
        //printf("%s\n",ar);
        a=strlen(ar);
        for(i=0;i<a;i++){
            if((ar[i]!=' ')||(ar[i]==' ' && ar[i+1]!='.' && ar[i+1]!=','))
                printf("%c",ar[i]);
        }
        printf("\n");
    }
    return 0;
}
