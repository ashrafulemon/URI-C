#include <stdio.h>
int main()
{
    int m, test_case = 0;
    char str[1000];
    while(++test_case)
    {
        int i, ans = 0, num = 0, cndtn = 1;
        scanf("%d", &m);
        if(m == 0)
            break;
        scanf("%s", str);
        for(i=0; str[i]; i++)
        {
            if(str[i] == '-')
            {
                if(cndtn == 0) ans -= num;
                else ans += num;
                cndtn = 0; num = 0;
            }
            else if(str[i] == '+')
            {
                if(cndtn == 0) ans -= num;
                else ans += num;
                cndtn = 1; num = 0;
            }
            else if(str[i]>=48 && str[i]<=58)
                num = num*10+(str[i]-48);
        }
        if(cndtn == 0) ans -= num;
        else ans += num;

        printf("Teste %d\n", test_case);
        printf("%d\n\n", ans);
    }
    return 0;
}
