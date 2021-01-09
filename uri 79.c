#include<stdio.h>
int main()
{
    int n,i,j,k;
    float ar[3];
    scanf("%d",&n);
    float arr[n];
    for(i=0;i<n;i++)
  {
    for(j=0;j<3;j++)
    {
    scanf("%f",&ar[j]);
    }
    arr[i]=((ar[0]*2)+(ar[1]*3)+(ar[2]*5))/(2+3+5);
  }
    for(k=0;k<n;k++)
   {
    printf("%.1f\n",arr[k]);
   }
  return 0;
}
