#include <stdio.h>
#include <math.h>

double f4(int i, int n){
    
    if(i==n){
        return sqrt(n);
    }

    return sqrt((i+f4(i+1, n))); 
}

double f4_iterativno(int n){
    
    double rez = sqrt(n);

    for(int i = n-1; i>=1; i--){
        rez = sqrt(i + rez);
    }

    return rez;
}

int main(){

    int n;
    scanf("%d", &n);

    printf("%lf\n", f4(1, n));
    printf("%lf", f4_iterativno(n));

    return 0;
}