#include<stdio.h>
#include<string.h>
int main()
{
    int a,b[10005],c,i,j,k;
    char ar[10005];
    while(scanf("%s%*c",ar)!=EOF){
        scanf("%d",&a);
        for(i=0;i<a;i++){
            scanf("%d",&b[i]);
        }
        for(i=0;i<a;i++){
            printf("%c",ar[b[i]-1]);
        }
        printf("\n");
    }
    return 0;
}
