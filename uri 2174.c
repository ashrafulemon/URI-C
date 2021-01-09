#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c=0,i,j,k;
    scanf("%d%*c",&a);
    char ar[a][1000];
    char ch[1000]={" "};
    for(i=0;i<a;i++){
        scanf("%s",ar[i]);
       // printf("%s\n",ar[i]);
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(strcmp(ar[i],ar[j])==0 && strcmp(ar[i],ch)!=0){
              strcpy(ar[j],ch);
              c=c+1;
            }
        }
    }
    c=151-(a-c);
    printf("Falta(m) %d pomekon(s).\n",c);
    return 0;
}
