#include <stdio.h>
#include <math.h>

int racun(int n)
{

    int broj = 10;

    for (int i = 1; i < n; i++)
    {
        broj += 11;
    }

    return broj;
}

double rek(int n, int gornji, int i)
{

    printf("n=%d, gornji=%d, i=%d\n", n, gornji, i);

    if (gornji < 0)
    {
        return 0;
    }

    return sqrt(1.0 * gornji / n + rek(n + i, gornji - 11, i + 1));
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf", rek(n, racun(n), 1));

    return 0;
}