#include <stdio.h>

double rek(int n, int gornji, int i){

    gornji = 2*n;

    int levi = 1;

    if(levi==n){
        return n;
    }

    if(i%2==0){
        return levi + 1.0*gornji/rek(levi+1,gornji-2, i+1);
    }
    if(i%2==1){
        return levi - 1.0*gornji/rek(levi+1,gornji-2, i+1);
    }

}


int main(){
    
    printf("%lf", rek(6, 12, 0));

    return 0;
}