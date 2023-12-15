#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    if ((a + b) <= c)
        printf("Not triangle\n");
    else
    {
        if ((a * a + b * b) == c * c)
            printf("Right triangle\n");
        else if ((a * a + b * b) > c * c)
            printf("Acute triangle\n");
        else
            printf("Obtuse triangle\n");
        if ((a == b) ^ (a == c) ^ (b == c))
            printf("Isosceles triangle\n");
        if ((a == b) && (a == c) && (b == c)) // 等边三角形也是等腰三角形
            printf("Equilateral triangle\n");
    }
}