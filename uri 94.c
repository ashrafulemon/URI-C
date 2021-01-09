#include<stdio.h>
int main()
{
    int n,a,i,j,k,b,c,d;
    float x,y,z;
    scanf("%d",&n);
    int arr[n];
    char ch[n];
    char C,R,S;
    a=0;
    b=0;
    c=0;
    d=0;

    for(i=0;i<n;i++){
    scanf("%d ",&arr[i]);
    scanf("%c",&ch[i]);
    }
    for(j=0;j<n;j++){
    d=d+arr[j];
    }

    for(k=0;k<n;k++){
        if(ch[k]=='C'){
         a=a+arr[k];
        }
    }
    for(k=0;k<n;k++){
        if(ch[k]=='R'){
         b=b+arr[k];
        }
    }
    for(k=0;k<n;k++){
        if(ch[k]=='S'){
         c=c+arr[k];
        }
    }
{



    x=a*100.00/d;
    y=b*100.00/d;
    z=c*100.00/d;
}

    printf("Total: %d cobaias\n",d);
    printf("Total de coelhos: %d\n",a);
    printf("Total de ratos: %d\n",b);
    printf("Total de sapos: %d\n",c);
    printf("Percentual de coelhos: %.2f %%\n",x);
    printf("Percentual de ratos: %.2f %%\n",y);
    printf("Percentual de sapos: %.2f %%\n",z);
    return 0;
}
