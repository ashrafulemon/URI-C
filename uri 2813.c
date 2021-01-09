#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,x=0,y=0,z=0;
    char ar[100];
    char br[100];
    scanf("%d",&a);
    for(i=0;i<a;i++){
    scanf("%s%s",ar,br);
     if(strcmp(ar,"chuva")==0 && z==0){
        x=x+1;
        y=1;
        z=0;
     }
     if(strcmp(ar,"chuva")==0 && z==1){
        x=x-1;
        y=0;
        z=0;
     if(strcmp(br,"chuva")==0 && y==0 ){
        x=x+1;
        y=0;
        z=1;
     }
     if(strcmp(br,"chuva")==0 && y==1 ){
        x=x-1;
        y=0;
        z=0;
     }
    }
    printf("%d",x);

    return 0;
}
