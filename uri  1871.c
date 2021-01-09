#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    char ar[1000];
    while(scanf("%d%d",&a,&b)){
        if(a==0 && b==0)
           break;
        c=a+b;
        sprintf(ar,"%d",c);
        k=strlen(ar);
        for(i=0;i<k;i++){
            if(ar[i]!='0')
                printf("%c",ar[i]);
        }
        printf("\n");
    }
    return 0;
}
