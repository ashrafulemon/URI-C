#include<stdio.h>
#include<math.h>
#define g 9.80665
#define p 3.14159
int main()
{
    int x1,x2,i,j,k;
    double m,n,d,e,f,h,y,z,t,a,b,c,p1,p2,q;

    while(scanf("%lf",&d)!=EOF){
            if(d>=1 && d<=150){
      scanf("%d%d",&x1,&x2);
      if(x1>=1 && x2<=9999){
      scanf("%d",&k);
      if(k>=1&& k<=100){
      double ar[k];
      for(i=0;i<k;i++){
        scanf("%lf%lf",&e,&f);
        if(e>=1 && e<=180 && f>=1 && f<=150){
        h=((e)*(p/180));
        b=g/(2*(f*f)*(cos(h)*cos(h)));
        a=-tan(h);
        c=-(d);
        q=(b*b)-(4*a*c);
        if(q>=0){
        m=sqrt(q);
        p1=(-b-m)/(2 *a);
        p2=(-b+m)/(2 *a);
        if(p1>p2){
            ar[i]=p1;
        }
        else
            ar[i]=p2;
        }
    for(j=0;j<1;j++){
        if(ar[i]>=x1 && ar[i]<=x2){
            printf("%.5lf -> DUCK\n",ar[i]);
        }
         else
            printf("%.5lf -> NUCK\n",ar[i]);
      }
        }
     }
    }
      }
    }
    }
    return 0;
}
