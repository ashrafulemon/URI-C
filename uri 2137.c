#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,l;
    while(scanf("%d%*c",&a)!=EOF){
    char ar[a+1][1000];
    for(i=0;i<a;i++){
        scanf("%s",ar[i]);
    }
    char tm[100];
    for(i=0;i<a;i++){
        for(j=i;j<a;j++){
           if(strcmp(ar[i],ar[j])>0){
              strcpy(tm,ar[i]);
              strcpy(ar[i],ar[j]);
              strcpy(ar[j],tm);
           }
        }
    }
        for(i=0;i<a;i++){
        printf("%s\n",ar[i]);
     }
    }
    return 0;
}
