
#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    scanf("%d",&a);
    if(a==0)
     printf("E\n");
    else if(a>0 && a<=35)
     printf("D\n");
    else if(a>35 && a<=60)
     printf("C\n");
    else if(a>60 && a<=85)
     printf("B\n");
    else if(a>85 && a<=100)
     printf("A\n");


    return 0;
}
