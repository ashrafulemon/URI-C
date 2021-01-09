#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c=0,d,i;
    scanf("%d %d",&a,&b);
    char ch[b][500];
    c=a;

    for(i=0;i<b;i++){
        scanf("%s",ch[i]);
        if(strcmp(ch[i],"fechou")==0)
            c=c+1;
        else
            c=c-1;
    }
    printf("%d\n",c);

    return 0;
}
