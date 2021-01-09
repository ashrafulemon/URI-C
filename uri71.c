#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,j=0,l;
    int i,k=0;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        c=a;
        a=b;
        b=c;
    }
    k=a+1;
    for(i=k;i<b;i++)
  {
        if(i%2!=0)
        {
        j=j+i;
        }
   }
    printf("%d\n",j);
    return 0;
}


