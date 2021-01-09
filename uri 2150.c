#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    char ar[1000];
    char ch[1000];
    while(scanf("%s\n%[^\n]%*c",ar,ch)!=EOF){
        c=0;
       // printf("%s\n%s\n",ar,ch);
        a=strlen(ar);
        b=strlen(ch);
        for(i=0;i<b;i++){
            for(j=0;j<a;j++){
                if(ch[i]==ar[j]){
                    c++;
                    break;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
