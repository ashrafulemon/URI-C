
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,i,j,k;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        d=0;
        scanf("%d%*c",&b);
        char ar[b][1000];
        for(j=0;j<b;j++){
            scanf("%s",ar[j]);
           // printf("%s\n",ar[j]);
        }
        for(j=0;j<b;j++){
            for(k=j;k<b;k++){
                if(strcmp(ar[j],ar[k])!=0){
                    d=1;
                    break;
                }
            }
            if(d==1)
                break;
        }
        if(d==1)
            printf("ingles\n");
        else
            printf("%s\n",ar[0]);
    }
    return 0;
}
