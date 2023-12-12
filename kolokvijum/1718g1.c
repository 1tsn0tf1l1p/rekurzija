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
    int donji = 2;
    int prvi = n / 2 + 1, drugi = n / 2, flag;
    double rez;

    if (n % 2 == 0)
    {
        rez = 1.0 * drugi / donji;
        drugi--;
    }
    else
    {
        rez = 1.0 * prvi / donji;
        prvi++;
    }

    if (n % 2 == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }

    donji += 2;

    for (int i = 2; i <= n; i++)
    {
        if (flag == 1)
        {
            rez = 1.0 * prvi / donji + sqrt(rez);
            donji += 2;
            prvi++;
        }
        else
        {
            rez = 1.0 * drugi / donji + sqrt(rez);
            drugi--;
            donji += 2;
        }

        flag = (flag + 1) % 2;
    }

    return sqrt(rez);
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 2 * n, 1, 1));
    printf("%lf\n", iterativno(n));

    return 0;
}