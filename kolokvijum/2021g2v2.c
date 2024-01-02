#include <stdio.h>

double rek(int n, char slovo, int polovina, int i, int dodavac)
{

    if (i % 2 != 0)
    {
        return slovo + dodavac + 1.0 * polovina / rek(n, slovo, polovina - 1, i + 1, dodavac + 1);
    }
    else
    {
        return slovo + n - dodavac + 1.0 * polovina / rek(n, slovo, polovina - 1, i + 1, dodavac + 1);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 'A', n / 2, 1, 0));

    return 0;
}