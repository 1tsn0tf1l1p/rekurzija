#include <stdio.h>

double rek(int n, int i)
{

    if (i == 4)
    {
        return -3;
    }

    return n - 1.0 * i / (i + 1.0 * n / rek(n / 2, i * 2));
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 1));

    return 0;
}