#include <stdio.h>
#include <math.h>

double rek(int n, int temp, int i, int korak)
{

    if (korak > n)
    {
        return 0;
    }

    if (i == 0)
    {
        i = temp / 2;
    }

    return sqrt((korak * i) + rek(n, temp, i - 1, korak + 1));
}

double iterativno(int n)
{
    int temp = n;

    int i = 1;

    double rez = n * i;

    n--;
    i++;

    for (int j = 1; j <= temp; j++)
    {
        if (i <= temp / 2)
        {
            rez = n * i + 1.0 * sqrt(rez);
            n--;
            i++;
        }
        else
        {
            i = 1;
            rez = n * i + 1.0 * sqrt(rez);
            n--;
            i++;
        }
    }

    return rez;
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, n, n / 2, 1));
    printf("%lf\n", iterativno(n));

    return 0;
}