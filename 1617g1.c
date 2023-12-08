#include <stdio.h>
#include <math.h>

double rek(int n, int i){

    if(n==0){
        return 0;
    }

    if(i%2==0){
        return sqrt(1.0/n + rek(n-1, i+1));
    }
    if(i%2==1){
        return sqrt(2.0/n + rek(n-1, i+1));
    }
    
}

double iterativno(int n){

    double rez = 0;
    int flag = 2;

    for(int i = 1; i<=n; i++){
        rez = rez + sqrt(flag/i);
        flag = (flag+1)%2;
    }
    
}

int main(){

    int n;
    scanf("%d", &n);

    printf("%lf", rek(n, 0));

    return 0;
}