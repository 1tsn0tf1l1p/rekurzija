#include <stdio.h>
#include <math.h>

double rek(int n, int broj_iteracije)
{

    if (n == 0)
    {
        return 0;
    }

    if (broj_iteracije % 2 != 0)
    {
        return sqrt(1.0 / n + rek(n - 1, broj_iteracije + 1));
    }
    else
    {
        return sqrt(2.0 / n + rek(n - 1, broj_iteracije + 1));
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 1));

    return 0;
}