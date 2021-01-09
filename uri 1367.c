#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,d,j,k;
    while(scanf("%d%*c",&a)){
        c=0;
        b=0;
        if(a==0)
            break;
        char ch[a][1000];
        char ar[a][1000];
        int aa[a];
        for(i=0;i<a;i++){
            scanf("%s %d %s",ch[i],&aa[i],ar[i]);
           // printf("%s %d %s\n",ch[i],aa[i],ar[i]);
        }
        for(i=0;i<a;i++){
            d=0;
            if(strcmp(ar[i],"correct")==0){
                b+=1;
                c=c+aa[i];
                for(j=0;j<i;j++){
                   if(strcmp(ar[j],"incorrect")==0 && strcmp(ch[i],ch[j])==0){
                       //d=d+20;
                       c=c+20;
                   }
                }
            }
        }
        printf("%d %d\n",b,c);
    }
    return  0;
}
