#include <stdio.h>
#include <math.h>

double rek(int n, int temp, int dupli_n, int i, int flag)
{
    /// printf("n=%d, dupli=%d, i=%d\n", n, dupli_n, i);

    if (n == 0)
    {
        return 0;
    }

    if (i == temp / 2 + 1)
    {
        i = 1;
    }

    if (flag % 2 != 0)
    {
        /// printf("Neparan: n=%d, dupli=%d, i=%d\n", n, dupli_n, i);
        return sqrt(1.0 * pow(dupli_n, i) / n + rek(n - 1, temp, dupli_n - 1, i + 1, 0));
    }
    else
    {
        /// printf("Paran: n=%d, dupli=%d, i=%d\n", n, dupli_n, i);
        return sqrt(1.0 * n / pow(dupli_n, i) + rek(n - 1, temp, dupli_n - 1, i + 1, 1));
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, n, 2 * n - 1, 1, 1));

    return 0;
}