#include <stdio.h>

double rek(int n, int broj, int i)
{
    /// printf("n = %d, i = %d, broj = %d\n", n, i, broj);

    if (broj / 2 < 4)
    {
        if (i == (broj / 2 + 1))
        {
            return 1 - i;
        }
    }
    else
    {
        if (i == 8)
        {
            return 1 - i;
        }
    }

    return n - 1.0 * i / (1.0 * i + 1.0 * n / rek(n / 2, broj, i * 2));
}

double iterativno(int n)
{

    int temp = n;

    int gornji, donji;

    double rez;

    if (temp / 2 < 4)
    {
        gornji = 3;
        donji = 4;
    }
    else
    {
        gornji = 2;
        donji = 8;
    }

    rez = 1 - donji;

    donji /= 2;

    for (int i = 2; i < temp - 2; i++)
    {
        rez = gornji - 1.0 * donji / (1.0 * donji + 1.0 * gornji / rez);

        if (temp % 2 != 0 && gornji == temp / 2)
        {
            gornji = gornji * 2 + 1;
            donji /= 2;
        }
        else
        {
            gornji *= 2;
            donji /= 2;
        }
    }

    return rez;
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, n, 1));

    printf("%lf\n", iterativno(n));

    return 0;
}