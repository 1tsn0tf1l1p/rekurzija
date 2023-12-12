#include <stdio.h>
#include <math.h>

double rek(int n, int gornji, int donji, int flag)
{
    if (gornji > n)
    {
        return 0;
    }

    if (flag % 2 != 0)
    {
        return sqrt(1.0 * gornji / donji + donji * rek(n, gornji + 1, donji + 1, flag + 1));
    }
    else
    {
        return sqrt(1.0 * gornji / pow(donji, 2) + rek(n, gornji + 1, donji + 1, flag + 1));
    }
}

double iterativno(int n)
{

    int temp = n;

    int donji = temp + 1;
    int gornji = temp;

    int flag;

    if (temp % 2 == 0)
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }

    double rez;

    if (temp % 2 == 0)
    {
        rez = 1.0 * gornji / pow(donji, 2);
    }
    else
    {
        rez = 1.0 * gornji / donji;
    }

    gornji--;
    donji--;

    for (int i = 0; i < temp; i++)
    {

        if (flag % 2 == 0)
        {
            rez = 1.0 * gornji / donji + n * sqrt(rez);
        }
        else
        {
            rez = 1.0 * gornji / pow(donji, 2) + sqrt(rez);
        }

        gornji--;
        donji--;
        n--;
        flag++;
    }

    return rez;
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 1, 2, 1));
    printf("%lf\n", iterativno(n));

    return 0;
}