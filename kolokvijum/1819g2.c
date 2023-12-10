#include <stdio.h>

int fib(int n)
{

    if (n <= 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

double rek(int n, int temp, int i)
{
    if (i == temp)
    {
        return fib(i);
    }

    if (i % 2 != 0)
    {
        return fib(i) + 3.0 * n / rek(n - 1, temp, i + 1);
    }
    else
    {
        return fib(i) - 3.0 * n / rek(n - 1, temp, i + 1);
    }
}

int fib_i(int n)
{

    int prvi = 1;
    int drugi = 1;
    int fib = prvi + drugi;

    for (int i = 3; i <= n; i++)
    {
        fib = prvi + drugi;
        prvi = drugi;
        drugi = fib;
    }

    return fib;
}

double iterativno(int n)
{
    int temp = n;

    int levi = fib(n);
    int gornji = 6;

    double rez = levi;

    int i = 1;

    n--;

    if (n % 2 == 0)
    {
        for (i; i < temp; i++)
        {
            if (i % 2 != 0)
            {
                rez = fib(n) + 1.0 * gornji / rez;
            }
            else
            {
                rez = fib(n) - 1.0 * gornji / rez;
            }
            printf("i=%d, n=%d, fib(n)=%d, gornji=%d, rez=%lf\n", i, n, fib(n), gornji, rez);
            n--;
            gornji = gornji + 3;
        }

        return fib(n) + 1.0 * gornji / rez;
    }
    else
    {
        for (i; i < temp; i++)
        {
            if (i % 2 != 0)
            {
                rez = fib(n) - 1.0 * gornji / rez;
            }
            else
            {
                rez = fib(n) + 1.0 * gornji / rez;
            }
            printf("i=%d, n=%d, fib(n)=%d, gornji=%d, rez=%lf\n", i, n, fib(n), gornji, rez);
            n--;
            gornji = gornji + 3;
        }

        return fib(n) + 1.0 * gornji / rez;
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lf\n", rek(n, n, 1));
    printf("%lf\n", iterativno(n));

    return 0;
}