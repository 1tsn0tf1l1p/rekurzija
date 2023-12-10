/*Napisati funkciju int pow_rek(int a, int b) koja rekurzivno izračunava b-ti stepen broja a.
Kasnije u glavnoj funkciji za dva uneta prirodna broja ispisati rezultat dobijen pozivom te funkcije.*/

#include <stdio.h>
#include <math.h>

int pow_rek(int a, int b)
{

    if (b == 1)
    {
        return a;
    }

    return a * pow(a, b - 1);
}

int main()
{

    int n, m;

    scanf("%d %d", &n, &m);

    printf("%d", pow_rek(n, m));

    return 0;
}