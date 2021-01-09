#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int a,b,c,d,e,i,j,k,l,m,n,o,r;
    char ar[10000];
    char ch[30]={"0123456789"};
    char chh[300];
    long long int chhh[300],p;
    scanf("%d%*c",&d);
    for(i=0;i<d;i++){
        scanf("%s",ar);
        e=strlen(ar);
        p=0;
        o=0;
        for(j=0;j<3;j++){
            n=0;
            r=0;
            for(k=o;k<e;k++){
                m=0;
                for(l=0;l<10;l++){
                    if(ar[k]==ch[l]){
                        chh[r]=ch[l];
                        m++;
                        n=1;
                        r++;
                       // printf("%c\n",ar[k]);
                        break;
                    }
                }
                if((m==0 && n==1 )|| k==e-1){
                  chh[r]='\0';
                  chhh[j]=atoi(chh);
                  //printf("aa= %d  ",chhh[j]);
                  p=p+chhh[j];
                 // printf("%d\n",p);
                  o=k+1;
                  n=0;
                  r=0;
                  break;
                }
            }
        }
        printf("%lld\n",p);
    }
    return  0;
}
