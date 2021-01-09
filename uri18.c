#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d\n",N);
    if(N>0 && N<1000000)
 {

    if(N/100)
      {
          int a,c,d,b,n,o,p,q,r,s,t,u;
          c=N/100;
          d=N%100;
          a=d/50;
          b=d%50;
          n=b/20;
          o=b%20;
          p=o/10;
          q=o%10;
          r=q/5;
          s=q%5;
          t=s/2;
          u=s%2;
          printf("%d nota(s) de R$ 100,00\n",c);
          printf("%d nota(s) de R$ 50,00\n",a);
          printf("%d nota(s) de R$ 20,00\n",n);
          printf("%d nota(s) de R$ 10,00\n",p);
          printf("%d nota(s) de R$ 5,00\n",r);
          printf("%d nota(s) de R$ 2,00\n",t);
          printf("%d nota(s) de R$ 1,00\n",u);
      }
    else if(N/50)
      {
          int a,b,n,o,p,q,r,s,t,u;;
          a=N/50;
          b=N%50;
          n=b/20;
          o=b%20;
          p=o/10;
          q=o%10;
          r=q/5;
          s=q%5;
          t=s/2;
          u=s%2;
          printf("%d nota(s) de R$ 50,00\n",a);
          printf("%d nota(s) de R$ 20,00\n",n);
          printf("%d nota(s) de R$ 10,00\n",p);
          printf("%d nota(s) de R$ 5,00\n",r);
          printf("%d nota(s) de R$ 2,00\n",t);
          printf("%d nota(s) de R$ 1,00\n",u);
      }
    else if(N/20)
      {
          int n,o,p,q,r,s,t,u;
          n=N/20;
          o=N%20;
          p=o/10;
          q=o%10;
          r=q/5;
          s=q%5;
          t=s/2;
          u=s%2;
          printf("%d nota(s) de R$ 20,00\n",n);
          printf("%d nota(s) de R$ 10,00\n",p);
          printf("%d nota(s) de R$ 5,00\n",r);
          printf("%d nota(s) de R$ 2,00\n",t);
          printf("%d nota(s) de R$ 1,00\n",u);

      }
    else if(N/10)
      {
          int h,i,j,k,l,m;
          h=N/10;
          i=N%10;
          j=i/5;
          k=i%5;
          l=k/2;
          m=k%2;
          printf("%d nota(s) de R$ 10,00\n",h);
          printf("%d nota(s) de R$ 5,00\n",j);
          printf("%d nota(s) de R$ 2,00\n",l);
          printf("%d nota(s) de R$ 1,00\n",m);
      }
    else if(N/5)
      {
          int d,e,f,g;
          d=N/5;
          e=N%5;
          f=e/2;
          g=e%2;
          printf("%d nota(s) de R$ 5,00\n",d);
          printf("%d nota(s) de R$ 2,00\n",f);
          printf("%d nota(s) de R$ 1,00\n",g);
      }
    else if(N/2)
      {
          int b,c;
          b=N/2;
          c=N%2;
          printf("%d nota(s) de R$ 2,00\n",b);
          printf("%d nota(s) de R$ 1,00\n",c);
      }
    else
      {
        printf("%d nota(s) de R$ 1,00\n",N);
      }
 }
 else
 {
     printf("\n");
 }
    return 0;
}
