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
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 1));

    return 0;
}