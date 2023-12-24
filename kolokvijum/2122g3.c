#include <stdio.h>
#include <math.h>

double rek(int n, int temp, int polovina, int i)
{
    if (n > temp)
    {
        return 0;
    }

    if (i < polovina)
    {
        /// printf("n=%d, temp=%d, polovina=%d, i=%d\n", n, temp, polovina, i);
        return sqrt(1.0 * n / pow(i, 2) + rek(n - 1, temp, polovina, i + 1));
    }
    else if (temp % 2 == 0 && i == polovina)
    {
        /// printf("n=%d, temp=%d, polovina=%d, i=%d\n", n, temp, polovina, i);
        return sqrt(1.0 * polovina / pow(i, 2) + rek(n + 2, temp, polovina, i + 1));
    }
    else
    {
        /// printf("n=%d, temp=%d, polovina=%d, i=%d\n", n, temp, polovina, i);
        return sqrt(1.0 * n / pow(i, 2) + rek(n + 1, temp, polovina, i + 1));
    }

    /// printf("n=%d, temp=%d, polovina=%d, i=%d\n", n, temp, polovina, i);
}

double iterativno(int n)
{
    int temp = n;

    int stepen = n;

    int i = 1;

    int donji = pow(stepen, 2);

    double rez = 1.0 * n / donji;

    n--;

    for (int j = 0; j <= temp; j++)
    {
        printf("n=%d, i=%d, stepen=%d, rez=%lf\n", n, i, stepen, rez);
        if (i < (temp / 2) - 1)
        {
            rez = 1.0 * n / donji + sqrt(rez);
            i++;
            n--;
            stepen--;
        }
        else
        {
            rez = 1.0 * n / donji + sqrt(rez);
            i++;
            n++;
            stepen--;
        }
    }

    return sqrt(rez);
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, n, n / 2 + 1, 1));
    printf("%lf\n", iterativno(n));
    return 0;
}