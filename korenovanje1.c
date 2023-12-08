#include <stdio.h>
#include <math.h>

double f3(int n){

    if(n==0){
        return 0;
    }

    return sqrt(n+f3(n-1));
}

double f3_iterativno(int n){

    double rez = 1;

    for(int i = 2; i<=n; i++){
        rez = sqrt(i+rez);
    }

    return rez;
}

int main(){

    int n;
    scanf("%d", &n);

    printf("%lf\n", f3(n));
    printf("%lf\n", f3_iterativno(n));

    return 0;
}