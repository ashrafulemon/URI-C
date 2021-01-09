#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    while(scanf("%d%*c",&a)){
        if(a==0)
            break;
        int l[a],m=0,n=0,p=0;
        char ar[a][1000];
        for(i=0;i<a;i++){
            scanf("%[^\n]%*c",ar[i]);
            printf("%s\n",ar[i]);
            l[i]=strlen(ar[i]);
            if(i==0)
                m=l[0];
            if(i>0 && l[i]>l[i-1])
                m=l[i];
        }

    }
    return 0;
}
