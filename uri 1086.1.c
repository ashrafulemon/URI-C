#include<stdio.h>

int abc(int a,int b,int c,int d,int br[],int e){
    int f=0,ff=0,g,i,j,k,z,x=0,y,w=0,t=0,tt=0,l=0,gg;

    int cr[10010];
    for(i=0;i<d;i++){
        if(br[i]>b)
            br[i]=0;
    }
    for(i=0;i<d;i++){
        if(b==br[i]){
            f=f+1;
            br[i]=0;
            x=x+1;
        }
        if(x==e){
            t=f;
            break;
        }
    }
    while(x<e){
     for(i=0;i<d;i++){
            cr[i]=0;
            w=0;
            for(k=0;k<d;k++){
                if(cr[i]<br[k]){
                cr[i]=br[k];
                w=k;
                }
            }
        br[w]=0;
        if(cr[i]==0)
            break;
        for(k=0;k<d;k++){
            if(cr[i]+br[k]==b && br[k]>0){
                f=f+2;
                x=x+1;
                // printf("cr %d  br  %d\n",cr[i],br[k]);
                cr[i]=0;
                br[k]=0;
                break;
            }
        }
        if(x==e){
            t=f;
            break;
        }
      }
    break;
    }
   return t;
}

int main()
{
    int a,b,c,d,e,ee,t,tt,x,i,gg,y=0,z=0;
    while(1){
        start:
        scanf("%d%d",&a,&b);
        if(a==0 && b==0)
            break;
        scanf("%d %d",&c,&d);
        int ar[10010];
        for(i=0;i<d;i++){
            scanf("%d",&ar[i]);
            if(ar[i]==a)
               y=y+1;
            if(ar[i]==b)
               z=z+1;
        }

        gg=c;
        if(gg%10!=0){
           printf("impossivel\n");
           goto start;
        }
        c=c/100;
        e=a/c;
        ee=b/c;
        if(y==e || z==e){
            if(y==e && z==e){
                if(y>z)
                    printf("%d",z);
                else if(y<z)
                    printf("%d",y);
            }
            else if(y==e && z!=e)
                printf("%d",y);
            else if(y==e && z!=e)
                printf("%d",y);
            goto start;
        }
        t=abc(a,b,c,d,ar,e);
    //  printf("t  %d\n",t);
        x=a;
        a=b;
        b=x;
        tt=abc(a,b,c,d,ar,ee);
    //  printf("tt  %d\n",tt);
        if(t!=0 && tt!=0){
            if(tt>t)
               printf("%d\n",t);
            else if(t>tt)
               printf("%d\n",tt);
        }
        if(t!=0 && tt==0)
            printf("%d\n",t);
        else if(tt!=0 && t==0)
            printf("%d\n",tt);
        else if(tt==0 && t==0)
            printf("impossivel\n");
   }
   return 0;
}

