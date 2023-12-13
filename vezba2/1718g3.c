#include <stdio.h>
#include <math.h>

double rek(int n, int gornji, int inkrement)
{
    printf("n = %d, gornji = %d, inkrement = %d\n", n, gornji, inkrement);
    if (gornji < 10.0)
        return 0;
    return sqrt((1.0 * gornji / n + rek(n + inkrement, gornji - 11, inkrement + 1)));
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, (11 * n) - 1, 1));
    return 0;
}