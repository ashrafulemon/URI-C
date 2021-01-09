#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    char ar[1000];
    while(scanf("%[^\n]%*c",ar)!=EOF){
        a=strlen(ar);
        for(i=0;i<a;i++){
            if(ar[i]=='@')
                printf("a");
            else if(ar[i]=='&')
                printf("e");
            else if(ar[i]=='!')
                printf("i");
            else if(ar[i]=='*')
                printf("o");
            else if(ar[i]=='#')
                printf("u");
            else
                printf("%c",ar[i]);
        }
        printf("\n");
    }
    return 0;
}
