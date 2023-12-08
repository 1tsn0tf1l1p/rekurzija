#include <stdio.h>

double rek(int n, int gornji, int i)
{

    if (gornji == 21)
    {
        return n + 21.0 / (n + i);
    }

    return n + 1.0 * gornji / rek(n + i, gornji - 11, i + 1);
}

double iterativno(int n)
{
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf", rek(n, n * 11 - 1, 1));
    printf("%lf", iterativno(n));

    return 0;
}