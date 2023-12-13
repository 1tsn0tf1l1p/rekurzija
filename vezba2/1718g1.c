#include <stdio.h>
#include <math.h>

double rek(int n, int brojIteracija, int donji, int i)
{

    if (donji == 0)
        return 0;

    if (brojIteracija % 2 != 0)
    {
        /// printf("n=%d, brojit=%d, donji=%d, i=%d\n", n, brojIteracija, donji, i);
        return (sqrt((1.0 * n / donji) + rek(n - 1, brojIteracija + 1, donji - 2, i)));
    }
    else
    {
        /// printf("n=%d, brojit=%d, donji=%d, i=%d\n", n, brojIteracija, donji, i);
        return (sqrt((1.0 * i / donji) + rek(n, brojIteracija + 1, donji - 2, i + 1)));
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 1, n * 2, 1));
    return 0;
}