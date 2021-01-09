#include<stdio.h>
#include<string.h>
int main()
{
    char ar[10000];
    char br[10000];
    int a,b,c,i,j,k=0,m=0;
    while(scanf("%[^\n]%*c",ar)!=EOF){
        m=1;
        a=strlen(ar);
        for(i=0;i<a;i++){
            if(ar[i]=='<' && ar[i+1]=='b' && ar[i+2]=='o' && ar[i+3]=='d' && ar[i+4]=='y' && ar[i+5]=='>'){
                k=1;
                m=0;
            }
            if(ar[i]=='<' && ar[i+1]=='/' && ar[i+2]=='b' && ar[i+3]=='o' && ar[i+4]=='d' && ar[i+5]=='y' && ar[i+6]=='>'){
                k=0;
            }
        }
        if(k==1 && m==1){
            printf("%s\n",ar);
            }
    }
    return 0;
}
