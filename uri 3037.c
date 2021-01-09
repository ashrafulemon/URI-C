#include<stdio.h>
int main()
{
    int a,b,c,d=0,e=0,f,i,j,k;
    scanf("%d",&a);
    while(a>0)
    {
        d=0;
        e=0;
        for(i=0;i<3;i++)
        {
           scanf("%d%d",&b,&c);
           d=d+(b*c);
        }
        for(i=0;i<3;i++)
        {
           scanf("%d%d",&b,&c);
           e=e+(b*c);
        }
        if(e>d)
            printf("MARIA\n");
        else
            printf("JOAO\n");

        a--;
    }
    return 0;
}
