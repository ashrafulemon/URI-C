#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,i,j,k;
    char ch[10]={"ABCDE*"};
    while(scanf("%d",&a)){
        if(a==0)
            break;
        int ar[5];
        d=0;
        for(i=0;i<a;i++){
            d=0;
            e=0;
            for(j=0;j<5;j++){
                scanf("%d",&ar[j]);
                if(ar[j]<=127){
                  d=d+1;
                  e=j;
                }
            }
            if(d==1)
                printf("%c\n",ch[e]);
            else
                printf("*\n");
        }

    }
    return 0;
}
