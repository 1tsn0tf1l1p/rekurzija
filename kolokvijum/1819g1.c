#include <stdio.h>

double rek(int n, int gornji, int i)
{
    if (i % 2 != 0)
    {
        return ('A' + n - i) + 1.0 * gornji / rek(n, gornji + 1, i + 1);
    }
    else
    {
        return ('A' + n - i) - 1.0 * gornji / rek(n, gornji + 1, i + 1);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 2, 1));

    return 0;
}