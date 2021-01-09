#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,f,g,h;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d%d",&b,&c);
        f=((3*b)*(3*b))+(c*c);
        g=(2*(b*b))+((5*c)*(5*c));
        h=(-(100*b))+(c*c*c);
        if(f>=g && f>=h)
            printf("Rafael ganhou\n");
        else if(g>=f && g>= h)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }
    return 0;
}
