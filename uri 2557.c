#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int c,i,j,k;
    char x,y;
    char ar[1000];
    char br[1000];
    char cr[1000];
    while(scanf("%[^+^=]%c%[^+^=]%c%[^\n]%*c",ar,&x,br,&y,cr)!=EOF){
        //printf("%s %s %s     %c %c  \n",ar,br,cr,x,y);
        if(strcmp(ar,"R")==0){
            int a,b;
            a=atoi(br);
            b=atoi(cr);
            printf("%d\n",b-a);
        }
        else if(strcmp(br,"L")==0){
            int a,b;
            a=atoi(ar);
            b=atoi(cr);
            printf("%d\n",b-a);
        }
        else{
            int a,b;
            a=atoi(ar);
            b=atoi(br);
            printf("%d\n",a+b);
        }
    }
    return 0;
}

