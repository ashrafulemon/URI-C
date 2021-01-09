#include<stdio.h>
double abc(double a)
{
    int i,j=1;
    for(i=1;i<=a;i++){
        j=j*i;
    }
    return j;
}

int main()
{
    double a,b,c=1,d;
    int i,j,k,e,f,g=0;
    char ar[1000];
    scanf("%d%*c",&k);
    double aa[k];
    for(i=0;i<k;i++){
        scanf("%s %d",ar,&j);
        //printf("%s %d\n",ar,j);
        g=g+j;
        aa[i]= abc(j);
        c=aa[i]*c;
        //printf("%u\n",aa[i]);
    }
    b=abc(g);
    a=b/c;
    printf("Feliz aniversario Tobias!\n");
    printf("%.lf\n",a);
    return 0;
}

