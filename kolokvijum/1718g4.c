#include <stdio.h>

double rek(int n, int gornji, int i)
{

    if (gornji == 21)
    {
        return n + 21.0 / (n + i);
    }

    return n + 1.0 * gornji / rek(n + i, gornji - 11, i + 1);
}

int levi(int n)
{
    int broj = n;

    for (int i = 0; i < n; i++)
    {
        broj = broj + i;
    }

    return broj;
}

double iterativno(int n)
{
    int levi_broj = levi(n);

    double rez = levi_broj;

    levi_broj = levi_broj - (n - 1);

    int gornji = 21;

    for (int i = 2; i <= n; i++)
    {
        rez = levi_broj + 1.0 * gornji / rez;
        levi_broj = levi_broj - (n - i);
        gornji = gornji + 11;
    }

    return rez;
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, n * 11 - 1, 1));
    printf("%lf\n", iterativno(n));

    return 0;
}