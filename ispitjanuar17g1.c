#include <stdio.h>

double ispit_jan17_rek(int levo, int n, int ink){

    int novo_levo = levo+ink;
    int gore = 2*n - ink;

    if(ink == n-1)
        return novo_levo;

    return novo_levo + gore/ispit_jan17_rek(novo_levo, n, ink+1);
}

int levo(int n){

    int broj = 1;

    for(int i  = 0; i<n; i++){
        broj += i;
    }

    return broj;
}

int gore(int n){

    int rez = 2*n + 1;
    for(int i = 1; i<n; i++){
        rez-=1;
    }

    return rez;
}

double ispit_jan17_iterativno(int n){

    double llevo = levo(n-1);
    double ggore = gore(n);
    double rez = levo(n);

    for(int i = llevo; i>=1; i--){
        rez = llevo + ggore/rez;
        llevo--;
        ggore++;
    }

    return rez;
}

int main(){

    printf("%lf\n", ispit_jan17_rek(1, 5, 0));
    printf("%lf", ispit_jan17_iterativno(5));

    return 0;
}