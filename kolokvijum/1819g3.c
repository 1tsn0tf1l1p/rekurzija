#include <stdio.h>
#include <math.h>

int fib_rek(int n)
{

    if (n <= 1)
    {
        return n;
    }

    return fib_rek(n - 1) + fib_rek(n - 2);
}

int fib_iterativno(int n)
{

    int prvi = 0;
    int drugi = 1;
    int fib;

    for (int i = 2; i <= n; i++)
    {
        fib = prvi + drugi;
        prvi = drugi;
        drugi = fib;
    }

    return fib;
}

double rek(int n, int i)
{

    if (n == 1)
    {
        return 1;
    }

    return sqrt(pow(n, 2) + fib_rek(i) * rek(n - 1, i + 1));
}

double iterativno(int n)
{
    int temp = n;

    int broj = fib_iterativno(n);

    int i = 1;

    double rez = sqrt(i);

    i++;

    for (i; i <= temp; i++)
    {
        rez = sqrt(pow(i, 2) + fib_iterativno(n) * rez);
        n--;
    }

    return rez;
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, 2));
    printf("%lf\n", iterativno(n));

    printf("%d\n", fib_iterativno(n));

    return 0;
}