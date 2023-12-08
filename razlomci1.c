#include <stdio.h>

double f1(int n){

    if(n==1){
        return 1;
    }

    return n + 1.0/f1(n-1);
}

double f1_iterativno(int n){

    double suma = 1;

    for(int i = 2; i<=n; i++){
        suma = i+1.0/suma;
    }

    return suma;
}

int main(){

    int a;
    scanf("%d", &a);

    printf("%lf\n", f1(a));
    printf("%lf", f1_iterativno(a));

    return 0;
}