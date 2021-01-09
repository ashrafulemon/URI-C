#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,e=0,f,g,h,i,j,k;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++){
        if(ar[i]%2==0)
        b=b+1;
    }
    for(i=0;i<a;i++){
        if(ar[i]%3==0)
        c=c+1;
    }
    for(i=0;i<a;i++){
        if(ar[i]%4==0)
        d=d+1;
    }
    for(i=0;i<a;i++){
        if(ar[i]%5==0)
        e=e+1;
    }
    printf("%d Multiplo(s) de 2\n",b);
    printf("%d Multiplo(s) de 3\n",c);
    printf("%d Multiplo(s) de 4\n",d);
    printf("%d Multiplo(s) de 5\n",e);

    return 0;
}
