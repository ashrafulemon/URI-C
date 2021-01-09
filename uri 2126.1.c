#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,d,c,i,j,k,e,f,gg,g;
    char ar[10000];
    char cr[10000];
    i=1;
    while(scanf("%s%s",ar,cr)!=EOF){
    e=0;
    f=0;
    a=strlen(ar);
    b=strlen(cr);

    for(j=0;j<b;j++){
      if(ar[0]==cr[j]){
         gg=j;
         e=0;
         for(j=j,k=0;j<b,k<a;j++,k++){
           if(ar[k]==cr[j]){
                e=e+1;
           }
           else{
               j=gg;
               break;
           }
           if(k==a-1 || j==b-1)
               break;
         }
         if(e==a){
            f=f+1;
            g=gg+1;
         }
      }
    }
    printf("Caso #%lld:\n",i);
    if(f>0){
        printf("Qtd.Subsequencias: %lld\n",f);
        printf("Pos: %d\n",g);
    }
    else
        printf("Nao existe subsequencia\n");
    i++;
    printf("\n");
    }
    return  0;
}
