#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,i,j,k,n,m=0;
    int aa,bb,gg,vv;
    char ch,cc,cc1;
    scanf("%d",&n);
    while(n>0){
        m=0;
        scanf("%d %c %d %c %d %c %d",&a,&cc,&c,&ch,&b,&cc1,&d);
        if(ch=='+'){
            aa=(a*d)+(b*c);
            bb=c*d;
        }
        else if(ch=='-'){
            aa=(a*d)-(b*c);
            bb=c*d;
        }
        else if(ch=='*'){
            aa=a*b;
            bb=c*d;
        }
        else if(ch=='/'){
            aa=a*d;
            bb=b*c;
        }
        if(aa<0 || bb<0){
            m=1;
        }
        if(aa<0 && bb<0){
            m=0;
        }
        aa=abs(aa);
        bb=abs(bb);
        if(aa>bb){
            for(i=bb;i>0;i--){
                if(aa%i==0 &&bb%i==0){
                    gg=aa/i;
                    vv=bb/i;
                    break;
                }
            }
        }
        else if(bb>=aa){
            for(i=aa;i>0;i--){
                if(aa%i==0 &&bb%i==0){
                    gg=aa/i;
                    vv=bb/i;
                    break;
                }
            }
        }
    if(m==0)
        printf("%d/%d = %d/%d\n",aa,bb,gg,vv);
    if(m==1)
        printf("-%d/%d = -%d/%d\n",aa,bb,gg,vv);
    n--;
    }
    return 0;
}
