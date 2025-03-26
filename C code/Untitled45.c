#include <stdio.h>

int test(double x[]){
    x[0] = 2.5;
    x[3] = 6.5;
    x[6] = 9.5;
    return 0;
}

int main(){
    double x[5];

    printf("%d", test(x));

    return 0;
}
