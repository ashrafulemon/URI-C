#include<stdio.h>
#include <stdlib.h>

int cmpfunc (const void *aa, const void *bb)
{
    return (*(int*)aa - *(int*)bb);
}

int main()
{
    int a, b, i, j, c=1, k=0, t=0;
    while(1)
    {
        scanf("%d %d",&a, &b);
        if(a==0 && b==0)
        {
            break;
        }
        int x[a+1], y[b];
        for(i=0; i<a; i++)
        {
            scanf("%d",&x[i]);
        }

        qsort(x, a, sizeof(int), cmpfunc);

        for(i=0; i<b; i++)
        {
            scanf("%d",&y[i]);
        }
        printf("CASE# %d:\n",c++);
        for(i=0; i<b; i++)
        {
            k=0;
            for(j=0; j<a; j++)
            {
                if(x[j]==y[i] && k!=1)
                {
                    printf("%d found at %d\n",y[i],j+1);
                    k=1;
                }
            }
            if(k==0)
            {
                printf("%d not found\n",y[i]);
            }
        }
    }
    return 0;
}
