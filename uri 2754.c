#include<stdio.h>
int main()
{
    double a=234.345, b=45.698;
    //1.56E-34;
    printf("%.6lf - %.6lf\n",a,b);
    printf("%.lf - %.lf\n",a,b);
    printf("%.1lf - %.1lf\n",a,b);
    printf("%.2lf - %.2lf\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);

    printf("%e - %e\n",a,b);/// windows a 3 ghor but 2 ghor ase
    printf("%E - %E\n",a,b);

    //printf("2.343450e+02 - 4.569800e+01\n");
   // printf("2.343450E+02 - 4.569800E+01\n");

    printf("%.3lf - %.3lf\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);
    return 0;
}
