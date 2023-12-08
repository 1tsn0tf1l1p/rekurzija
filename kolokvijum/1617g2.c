#include <stdio.h>
#include <math.h>

double rek(int n, int i)
{
    if (n == 1)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        return n + 1.0 * sqrt(1) / rek(n - 1, i);
    }
    else
    {
        return n + 1.0 * sqrt(2) / rek(n - 1, i);
    }
}

double iterativno(int n)
{
    int i = 1;

    double rez = i;

    i++;

    for (i; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            rez = i + 1.0 * sqrt(1) / rez;
        }
        else
        {
            rez = i + 1.0 * sqrt(2) / rez;
        }
    }

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