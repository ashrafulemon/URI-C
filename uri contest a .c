#include<stdio.h>
unsigned long long int abc(unsigned long long int a)
{
    unsigned long long int i,j=1;
    for(i=1;i<=a;i++){
        j=j*i;
    }
    return j;
}

int main()
{
    unsigned long long int a,b,c=1,d;
    int i,j,k,e,f,g=0;
    char ar[1000];
    scanf("%d%*c",&k);
    unsigned long long int aa[k];
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
    printf("%u\n",a);
    return 0;
}
