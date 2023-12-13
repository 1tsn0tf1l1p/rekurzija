#include <stdio.h>
#include <math.h>

double rek(int n, int broj_iteracije)
{

    if (n == 1)
    {
        return 1;
    }

    if (broj_iteracije % 2 != 0)
    {
        return n + 1.0 * sqrt(1) / rek(n - 1, broj_iteracije + 1);
    }
    else
    {
        return n + 1.0 * sqrt(2) / rek(n - 1, broj_iteracije + 1);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 1));

    return 0;
}