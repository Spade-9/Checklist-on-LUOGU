#include <stdio.h>
int main()
{
    int s, v;
    scanf("%d %d", &s, &v);
    int time = 10 + s / v + (s % v != 0);
    int h = time / 60 + 1, min = time % 60;
    min = 60 - min;
    h = 8 - h;
    if (h < 0)
        h += 24;
    printf("%02d:%02d", h, min);
    return 0;
}