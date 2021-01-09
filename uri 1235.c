#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    scanf("%d%*c",&a);
    for(k=0;k<a;k++){
        char ar[1000];
        scanf("%[^\n]%*c",ar);
        b=strlen(ar);
        c=b/2;
        for(i=c-1; i>=0; i--)
            printf("%c",ar[i]);
        for(j=b-1; j>=c; j--)
            printf("%c",ar[j]);
        printf("\n");
    }
    return 0;
}
