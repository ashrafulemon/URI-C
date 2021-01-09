#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,b,c,i,j,k;
    char ar[100]="caw caw";
    char br[100];
    for(i=1;i<=3;i++)
    {
        a=0;
        while(1){
            gets(br);
            if(strcmp(ar,br)==0)
            break;
            if(br[0]=='-'){
                    if(br[1]=='-'){
                        if(br[2]=='-')
                        a=a+0;
                        if(br[2]=='*')
                        a=a+1;
                    }
                    if(br[1]=='*'){
                        if(br[2]=='-')
                        a=a+2;
                        if(br[2]=='*')
                        a=a+3;
                     }
            }
            else if(br[0]=='*'){
                    if(br[1]=='-'){
                        if(br[2]=='-')
                        a=a+4;
                        if(br[2]=='*')
                        a=a+5;
                    }
                    if(br[1]=='*'){
                        if(br[2]=='-')
                        a=a+6;
                        if(br[2]=='*')
                        a=a+7;
                     }
            }
        }
        printf("%d\n",a);
    }
    return 0;
}
