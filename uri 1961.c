#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c=0,d,i;
    scanf("%d%d",&a,&b);
    int ar[b];
    for(i=0;i<b;i++){
        scanf("%d",&ar[i]);
    }
    for(i=1;i<b;i++){
        if(abs(ar[i]-ar[i-1])>a){
            c=1;
            break;
        }
    }
    if(c==0)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}
