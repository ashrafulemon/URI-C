#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,i,j,k;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d%d",&b,&c);
        k=b+c;
        if(k==0)
            printf("PROXYCITY\n");
        else if(k==1)
            printf("P.Y.N.G.\n");
        else if(k==2)
            printf("DNSUEY!\n");
        else if(k==3)
            printf("SERVERS\n");
        else if(k==4)
            printf("HOST!\n");
        else if(k==5)
            printf("CRIPTONIZE\n");
        else if(k==6)
            printf("OFFLINE DAY\n");
        else if(k==7)
            printf("SALT\n");
        else if(k==8)
            printf("ANSWER!\n");
        else if(k==9)
            printf("RAR?\n");
        else if(k==10)
            printf("WIFI ANTENNAS\n");
    }
    return 0;
}
