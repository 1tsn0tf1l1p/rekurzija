#include <stdio.h>
#include <math.h>

double rek(int n, int temp, int polovina, int i)
{
    if (n > temp)
    {
        return 0;
    }

    if (i < polovina)
    {
        /// printf("n=%d, temp=%d, polovina=%d, i=%d\n", n, temp, polovina, i);
        return sqrt(1.0 * n / pow(i, 2) + rek(n - 1, temp, polovina, i + 1));
    }
    else if (temp % 2 == 0 && i == polovina)
    {
        /// printf("n=%d, temp=%d, polovina=%d, i=%d\n", n, temp, polovina, i);
        return sqrt(1.0 * polovina / pow(i, 2) + rek(n + 2, temp, polovina, i + 1));
    }
    else
    {
        /// printf("n=%d, temp=%d, polovina=%d, i=%d\n", n, temp, polovina, i);
        return sqrt(1.0 * n / pow(i, 2) + rek(n + 1, temp, polovina, i + 1));
    }

    /// printf("n=%d, temp=%d, polovina=%d, i=%d\n", n, temp, polovina, i);
}

double iterativno(int n)
{
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, n, n / 2 + 1, 1));
    printf("%lf\n", iterativno(n));
    return 0;
}