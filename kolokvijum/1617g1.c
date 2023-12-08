#include <stdio.h>
#include <math.h>

double rek(int n, int i)
{
    if (n == 0)
    {
        return 0;
    }

    if (i % 2 != 0)
    {
        return sqrt(1.0 / n + rek(n - 1, i + 1));
    }
    else
    {
        return sqrt(2.0 / n + rek(n - 1, i - 1));
    }
}

int racun_gornji(int n)
{

    int gornji;

    if (n % 2 == 0)
    {
        gornji = 2;
    }
    else
    {
        gornji = 1;
    }

    return gornji;
}

double iterativno(int n)
{
    int i = 1;
    int gornji = racun_gornji(n);
    double rez = 1.0 * gornji / i;

    i++;

    for (i; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            rez = 1.0 / i + sqrt(rez);
        }
        else
        {
            rez = 2.0 / i + sqrt(rez);
        }
    }

    rez = sqrt(rez);

    return rez;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 1));

    printf("%lf\n", iterativno(n));

    return 0;
}