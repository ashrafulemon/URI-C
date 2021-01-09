#include<stdio.h>
#include<stdio.h>
int main()
{
    int c=0,d=0,e=0,f,g,h=0,i,j,k;
    char a[100];
    char b[100];
    while(scanf("%[^\n]%*c",a)!=EOF){
        scanf("%[^\n]%*c",b);
       // printf("%s %s\n",a,b);
        e=0;
        c=0;
        d=0;
        f=strlen(a);
        g=strlen(b);
        for(i=h;i<f;i++){
            for(j=e;j<g;j++){
                if(a[i]==b[j]){
                    c=c+1;
                    e=j+1;
                  //  printf("%c\n",a[i]);
                    break;
                }
                if(c>d)
                  d=c;
                c=0;
                e=0;
            }
            if(c>d)
                d=c;
        }
        printf("%d\n",d);
    }

    return 0;
}
