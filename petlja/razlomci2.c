#include <stdio.h>

double f2(int i, int n)
{

    if (i == n)
    {
        return n;
    }

    return i + 1.0 / f2(i + 1, n);
}

double f2_i(int n)
{
    double rez = n;
    for (int i = n - 1; i >= 1; i--)
    {
        rez = i + 1.0 / rez;
    }

    return rez;
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", f2(1, n));
    printf("%lf", f2_i(n));

    return 0;
}