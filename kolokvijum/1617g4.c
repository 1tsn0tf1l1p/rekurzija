#include <stdio.h>

double rek(int n, int gornji, int i)
{

    if (i == n)
    {
        return i;
    }

    if (i % 2 != 0)
    {
        return i + 1.0 * gornji / rek(n, gornji - 2, i + 1);
    }
    else
    {
        return i - 1.0 * gornji / rek(n, gornji - 2, i + 1);
    }
}

int gornji(int n)
{

    int gornji = 2 * n;

    for (int i = 0; i < n - 2; i++)
    {
        gornji -= 2;
    }

    return gornji;
}

double iterativno(int n)
{

    int gornji_broj = gornji(n);

    double rez = n;

    int temp = n;

    for (int i = 1; i < temp; i++)
    {
        if (i % 2 != 0)
        {
            rez = (n - 1) + 1.0 * gornji_broj / rez;
        }
        else
        {
            rez = (n - 1) - 1.0 * gornji_broj / rez;
        }
        n--;
        gornji_broj += 2;
    }

    return rez;
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 2 * n, 1));
    printf("%lf\n", iterativno(n));

    return 0;
}