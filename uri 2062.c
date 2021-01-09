#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    scanf("%d%*c",&a);
    char ar[a+1][1000];
    for(i=0;i<a;i++){
        scanf("%s",ar[i]);
        if(strlen(ar[i])==3){
            if(ar[i][0]=='O' && ar[i][1]=='B')
                ar[i][2]='I';
            if(ar[i][0]=='U' && ar[i][1]=='R')
                ar[i][2]='I';
        }
    }
    for(i=0;i<a;i++){
        printf("%s",ar[i]);
        if(i==(a-1))
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}
