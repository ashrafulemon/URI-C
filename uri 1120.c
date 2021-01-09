#include<stdio.h>
int main()
{
    int i,j,k,l;
    char a[10];
    char b[1000];
    while(scanf("%s%s",a,b)){
       if(a[0]=='0'&& b[0]=='0')
        return 0;
       j=strlen(b);
       k=0;
       l=0;
       for(i=0;i<j;i++){
        if(a[0]!=b[i]){
            if(b[i]!='0')
                k=1;
            if(k==1){
                l=1;
                printf("%c",b[i]);
            }
        }
       }
       if(l==0)
        printf("0");
       printf("\n");
    }
    return 0;
}
