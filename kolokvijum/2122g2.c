#include <stdio.h>

double rek(int n, int donji, int brojac)
{

    if (brojac % 2 != 0)
    {
        return n - 1.0 * donji / rek(n, donji, brojac++);
    }
    else
    {
        return donji + 1.0 * n / rek(n / 2, donji + 1, brojac++);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 1, 1));

    return 0;
}