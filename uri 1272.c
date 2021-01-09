#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    scanf("%d%*c",&a);
    for(i=0;i<a;i++){
        char ar[1000];
        scanf("%[^\n]%*c",ar);
        //printf("%s\n",ar);
        b=strlen(ar);
        for(j=0;j<b;j++){
            if(ar[j]!=' ' && j==0)
                printf("%c",ar[0]);
            else if(ar[j]!=' ' && ar[j-1]==' ')
                printf("%c",ar[j]);
        }
        printf("\n");
    }
    return 0;
}
