#include<stdio.h>
int main()
{
     long int ai,ar,cr,br,arr,brr,a,b,c,d,tt,ttt,cy;
    while(1){
        scanf("%ld%ld",&ar,&arr);
        if(ar==0 && arr==0){
            break;
        }
        a=0;
        b=ar;
        c=arr;
        cy=0;
       while(1){
            tt =b%10;
            ttt=c%10;
            b=b/10;
            c=c/10;
            cr=0;
            cr=tt+ttt+cy;
            if(cr>=10){
                cy=1;
                a=a+1;
            }
            else if(cr<10){
                cy=0;
            }
            if(tt==0 && ttt==0){
                break;
            }
        }
        if(a==0){
          printf("No carry operation.\n");
        }
        else if(a==1){
          printf("1 carry operation.\n");
        }
        else
        printf("%ld carry operations.\n",a);
    }
    return 0;
}
