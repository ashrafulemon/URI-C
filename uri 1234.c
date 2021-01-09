#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int a,b,c,d,i,j;
    char ar[10000];
    while( scanf("%[^\n]%*c",ar)!=EOF){
        b=strlen(ar);
        c=1;
        d=1;
        for(i=0;i<b;i++){
            if(ar[i]!=' ' && c==1){
                d=0;
                c=0;
                ar[i]=toupper(ar[i]);
            }
            else if(ar[i]!=' ' && d==0){
                c=1;
                d=1;
                ar[i]=tolower(ar[i]);
            }
        }
        ar[b]='\0';
        printf("%s\n",ar);
    }
    return 0;
}
