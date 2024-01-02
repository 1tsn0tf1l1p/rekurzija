#include <stdio.h>
#include <math.h>

double rek(int n, int broj, int temp, int donji, int brojac)
{

    /// printf("n=%d temp=%d donji=%d brojac=%d\n", n, temp, donji, brojac);

    if (brojac > broj)
    {
        return 0;
    }

    if (brojac <= temp)
    {
        printf("n=%d temp=%d donji=%d brojac=%d\n", n, temp, donji, brojac);
        return sqrt(1.0 * n / pow(donji, 2) + rek(n - 1, broj, temp, donji + 1, brojac + 1));
    }
    else if (broj % 2 == 0 && brojac == temp)
    {
        printf("n=%d temp=%d donji=%d brojac=%d\n", n, temp, donji, brojac);
        return sqrt(1.0 * n / pow(donji, 2) + rek(n, broj, temp, donji + 1, brojac + 1));
    }
    else if (brojac > temp)
    {
        printf("n=%d temp=%d donji=%d brojac=%d\n", n, temp, donji, brojac);
        return sqrt(1.0 * n / pow(donji, 2) + rek(n + 1, broj, temp, donji + 1, brojac + 1));
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, n, n / 2 + 1, 1, 1));

    return 0;
}