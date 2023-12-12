#include <stdio.h>

double rek(int n, int temp, int i, int flag, int brojac)
{

    if (flag > temp)
    {
        return 0;
        /// return 'A' + (temp / 2) + 1;
    }

    if (flag <= n / 2)
    {
        if (brojac % 2 == 0)
        {
            printf("MANJI: n=%d, temp=%d, i=%d, flag=%d, brojac=%d\n", n, temp, i, flag, brojac);
            return ('A' + brojac) + 1.0 * i / rek(n, temp, i - 1, flag + 1, brojac + 1);
        }
        else
        {
            printf("MANJI: n=%d, temp=%d, i=%d, flag=%d, brojac=%d\n", n, temp, i, flag, brojac);
            return ('A' + n) + 1.0 * i / rek(n - 1, temp, i - 1, flag + 1, brojac + 1);
        }
    }
    else
    {
        if (brojac % 2 == 0)
        {
            printf("VECI: n=%d, temp=%d, i=%d, flag=%d, brojac=%d\n", n, temp, i, flag, brojac);
            return ('A' + brojac) + 1.0 * i / rek(n, temp, i + 1, flag + 1, brojac + 1);
        }
        else
        {
            printf("VECI: n=%d, temp=%d, i=%d, flag=%d, brojac=%d\n", n, temp, i, flag, brojac);
            return ('A' + n) + 1.0 * i / rek(n - 1, temp, i + 1, flag + 1, brojac + 1);
        }
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, n, n / 2, 1, 0));

    return 0;
}