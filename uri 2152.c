#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d",&j);
    for(i=0;i<j;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(c==0)
            printf("%02d:%02d - A porta fechou!\n",a,b);
        else
            printf("%02d:%02d - A porta abriu!\n",a,b);
    }
    return 0;
}
