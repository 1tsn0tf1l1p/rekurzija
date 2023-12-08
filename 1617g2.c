#include <stdio.h>
#include <math.h>
double rek(int n, int i){

    if(n == 1){
        return 1;
    }

    if(i%2==0){
        return n + sqrt(1)/rek(n-1, i+1);
    }
    if(i%2==1){
        return n + sqrt(2)/rek(n-1, i+1);
    }
}

double iterativno(int n){

    double rez = 1;
    int flag = 1;

    for(int i = 2; i<=n; i++){
        if(flag%2==1){
            rez = i + sqrt(1)/rez;
        }
        if(flag%2==0){
            rez = i + sqrt(2)/rez;
        }
        flag++;
    }

    return rez;
}

int main(){

    printf("%lf", iterativno(6));

    return 0;
}