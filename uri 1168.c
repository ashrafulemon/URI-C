#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,j,k,b,c;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        b=0;
        char ar[10000];
        scanf("%s",ar);
        k=strlen(ar);
        for(j=0;j<k;j++){
           if(ar[j]=='0')
                b=b+6;
           else if(ar[j]=='1')
                b=b+2;
           else if(ar[j]=='2')
                b=b+5;
           else if(ar[j]=='3')
                b=b+5;
           else if(ar[j]=='4')
                b=b+4;
           else if(ar[j]=='5')
                b=b+5;
           else if(ar[j]=='6')
                b=b+6;
            else if(ar[j]=='7')
                b=b+3;
            else if(ar[j]=='8')
                b=b+7;
            else if(ar[j]=='9')
                b=b+6;
        }
        printf("%d leds\n",b);

    }

    return 0;
}
