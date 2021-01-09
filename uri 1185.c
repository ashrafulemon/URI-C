

#include<stdio.h>
int main()
{
    double a,b=0,d,k,ar[12][12];
    int i,j,e=0,g=11;
    char c;
    //scanf("%lf%*c",&a);
    scanf("%c",&c);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++){
            scanf("%lf",&ar[i][j]);
              if(j<g){
              b=b+ar[i][j];
              e=e+1;
              }
        }
        g--;
    }
    if(c=='S')
        printf("%.1lf\n",b);
    if(c=='M')
    {
        k=b*1.00/e;
        printf("%.1lf\n",k);
    }
    return 0;
}

