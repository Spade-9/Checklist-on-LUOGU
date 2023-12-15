#include <stdio.h>
int main()
{
    int m, t, s;
    scanf("%d%d%d", &m, &t, &s);
    int ans = -1;
    if (t)
        ans = m - (s / t + (s % t != 0));
    if (ans > 0)
        printf("%d", ans);
    else
        printf("0");
    return 0;
}