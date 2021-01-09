#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k,d,e,f,g,h;
    char ar[1000];
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        scanf("%s",ar);
        d=strlen(ar);
        f=1;
        h=1;
        g=c;
        a=a-1;
        for(i=0;i<a;i++){
             scanf("%s",ar);
             e=strlen(ar);
             if((e+d+1)<=c)
                d=d+e+1;
             else{
               f=1+f;
               if(f>b)
               {
                 f=1;
                 h=h+1;
               }
               d=e;
            }
        }
        printf("%d\n",h);
    }
    return 0;
}
