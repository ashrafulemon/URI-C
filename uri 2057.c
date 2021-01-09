#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,z,i,j,k;
    scanf("%d %d %d",&a,&b,&c);
    d=a+b+c;
    e=a+b;
    if(d<24 && d>=0)
        printf("%d\n",d);
    else if(e<24){
        if(d<0){
           f=24+d;
           printf("%d\n",f) ;
        }
        else if(d>23){
             f=d-24;
             printf("%d\n",f) ;
        }
    }
    else if(e>24){
        g=e-24;
        h=g+c;
        if(h>=0 && h<24)
            printf("%d\n",h);
        else if(h<0){
           f=24+h;
           printf("%d\n",f) ;
        }
        else if(g>23){
             f=h-24;
             printf("%d\n",f) ;
        }
    }
    return 0;
}
