#include <stdio.h>
#include <math.h>

double rek(int n, int donji, int i, int brojac)
{

    if (donji < 2)
    {
        return 0;
    }

    if (brojac % 2 != 0)
    {
        return (sqrt(1.0 * n / donji + rek(n - 1, donji - 2, i, brojac + 1)));
    }
    else
    {
        return (sqrt(1.0 * i / donji + rek(n, donji - 2, i + 1, brojac + 1)));
    }
}

double iterativno(int n)
{

    int temp = n;

    int donji = 2;

    int pocetni;

    if (n % 2 == 0)
    {
        pocetni = n / 2;
    }
    else
    {
        pocetni = n / 2 + 1;
    }

    double rez = 1.0 * pocetni / donji;

    donji = donji + 2;

    if (n % 2 == 0)
    {
        for (int i = 1; i < temp; i++)
        {
            if (i % 2 != 0)
            {
                rez = 1.0 * (pocetni + i) / donji + sqrt(rez);
            }
            else
            {
                rez = 1.0 * (pocetni - i) / donji + sqrt(rez);
            }
            donji = donji + 2;
        }
        return sqrt(rez);
    }
    else
    {
        for (int i = 1; i < temp; i++)
        {
            if (i % 2 != 0)
            {
                rez = 1.0 * (pocetni - i) / donji + sqrt(rez);
            }
            else
            {
                rez = 1.0 * (pocetni + i) / donji + sqrt(rez);
            }
            donji = donji + 2;
        }
        return sqrt(rez);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 2 * n, 1, 1));
    printf("%lf\n", iterativno(n));

    return 0;
}