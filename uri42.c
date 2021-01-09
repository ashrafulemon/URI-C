#include<stdio.h>
int main()
{
    int a,b,c,d,i=0,j=0,k=0;
    scanf("%d%d%d",&a,&b,&c);
    int arr[3]={a,b,c};

    for(i=0;i<3;i++){
     for(j=i+1;j<3;j++){
      if(arr[i]>arr[j])
      {
        d=arr[i];
        arr[i]=arr[j];
        arr[j]=d;
      }
     }
    }
    for(k=0;k<3;k++){
    printf("%d\n",arr[k]);
    }
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}
