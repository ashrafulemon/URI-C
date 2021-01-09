#include<stdio.h>
int main()
{
    int a,b,c,e,d,f,ff,g,i,j,k,z,x,y,w=0,t,tt,l=0,gg;
    while(1){
        start:
        scanf("%d%d",&a,&b);
        if(a==0 && b==0)
        break;
        f=0;
        x=0;
        t=0;
        tt=0;
        l=0;
        scanf("%d %d",&c,&d);
        gg=c;
        c=c/100;
        int ar[d];
        int br[d];
        int cr[d];
        int aar[d];
        int bbr[d];
        int ccr[d];

        for(i=0;i<d;i++){
            scanf("%d",&ar[i]);
        }
        if(gg%10!=0){
           printf("impossivel\n");
           goto start;
        }
        //
        e=a/c;

        for(i=0;i<d;i++){
            br[i]=ar[i];
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
        while(1){
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
      //  printf("f  %d  t  %d\n",f,t);

        ff=0;
        x=0;
        z=a;
        a=b;
        b=z;
        e=a/c;
        for(i=0;i<d;i++){
            bbr[i]=ar[i];
            if(bbr[i]>b)
            bbr[i]=0;
        }

        for(i=0;i<d;i++){
            if(b==bbr[i]){
                ff=ff+1;
                bbr[i]=0;
                x=x+1;
            }
            if(x==e){
                tt=ff;
                break;
            }
        }
        while(1){
            for(i=0;i<d;i++){
                ccr[i]=0;
                w=0;
                for(k=0;k<d;k++){
                   if(ccr[i]<bbr[k]){
                    ccr[i]=bbr[k];
                    w=k;
                   }
                }
                bbr[w]=0;
                if(ccr[i]==0)
                    break;
                for(k=0;k<d;k++){
                   if(ccr[i]+bbr[k]==b && bbr[k]>0){
                    ff=ff+2;
                    x=x+1;
                   // printf("ccr %d  bbr  %d\n",ccr[i],bbr[k]);
                    ccr[i]=0;
                    bbr[k]=0;
                    break;
                   }
                }
               if(x==e){
                tt=ff;
                break;
               }
            }
            break;
        }
   // printf("ff %d  tt  %d\n",ff,tt);

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

