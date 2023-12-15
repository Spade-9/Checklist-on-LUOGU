#include <stdio.h>
#include <math.h>

#define pi 3.14
int main()
{
    int h, r;
    scanf("%d%d", &h, &r);
    float v = pi * r * r * h;
    int ans = ceil(20 * 1000 / v);
    printf("%d", ans);
    return 0;
}