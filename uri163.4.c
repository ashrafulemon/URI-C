#include<stdio.h>
#include<math.h>
#define g 9.80665
#define p 3.14159
int main()
{
    int x1,x2,n,i,j;
    double r,o,v,m,d,h,t,a,b,c,p1,p2,t1,t2;
    double ar[100000];
    while(scanf("%lf",&h)!=EOF){
      scanf("%d%d",&x1,&x2);
      scanf("%d",&n);
      for(i=0;i<n;i++){
        scanf("%lf%lf",&o,&v);
        r=((o)*(p/180));
        b=(v*sin(r));
        a=-(g/2);
        c=h;
        m=sqrt((b*b)-(4*a*c));
        t1=(-b-m)/(2*a);
        t2=(-b+m)/(2*a);
       /* printf("%lf\n",r);
        printf("%lf\n",a);
        printf("%lf\n",b);
        printf("%lf\n",c);
        printf("%lf\n",m);
        printf("%lf\n",t1);
        printf("%lf\n",t2);
        printf("\n");*/
      if(t1>0){
          ar[i]=v*cos(r)*t1;
      }
      else if(t2>0){
          ar[i]=v*cos(r)*t2;
      }
    }
    for(i=0;i<n;i++){
        if(ar[i]>=x1 && ar[i]<=x2){
            printf("%.5lf -> DUCK\n",ar[i]);
        }
         else
            printf("%.5lf -> NUCK\n",ar[i]);
    }
    }
    return 0;
}
