#include<stdio.h>
#include<math.h>
#define g 9.80665
#define p 3.14159
int main()
{
    int x1,x2,i,j,k;
    double m,n,d,e,f,h,y,z,t,a,b,c,p1,p2;
    double ar[100000];
    while(scanf("%lf",&d)!=EOF){
      scanf("%d%d",&x1,&x2);
      scanf("%d",&k);
      for(i=0;i<k;i++){
        scanf("%lf%lf",&e,&f);
        h=((e)*(p/180));
        a=g/(2*(f*f)*(cos(h)*cos(h)));
        b=-tan(h);
        c=-(d);
        m=sqrt((b*b)-(4*a*c));
        p1=(-b-m)/(2 *a);
       // p1=(-tan(h)-sqrt((b*b)-(4*a*c)))/2*g/(2*(f*f)*(cos(h)*cos(h)));
        p2=(-b+m)/(2 *a);
        if(p1>p2 && p1>=0){
            ar[i]=p1;
        }
        else if(p2>p1 && p2>=0){
            ar[i]=p2;
        }
        //else
         //   ar[i]=0.00000;
    }
    for(i=0;i<k;i++){
        if(ar[i]>=x1 && ar[i]<=x2){
            printf("%.5lf -> DUCK\n",ar[i]);
        }
         else
            printf("%.5lf -> NUCK\n",ar[i]);
    }
    }
    return 0;
}
