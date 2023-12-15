// 很简单的题，不过可以使用位操作

#include <stdio.h>
int main()
{
    int x, a, b;
    scanf("%d", &x);
    a = (x % 2 == 0);
    b = (x > 4 && x <= 12);
    printf("%d %d %d %d", a && b, a || b, a ^ b, !a && !b);
    return 0;
}