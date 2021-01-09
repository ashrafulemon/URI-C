#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char a[1000];
    scanf("%s",a);
    j=strlen(a);
    for(i=0;i<j;i++){
        if(a[i]=='.' || a[i]=='-')
            printf("\n");
        if(a[i]!='.' && a[i]!='-')
            printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}
