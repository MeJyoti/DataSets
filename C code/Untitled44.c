#include <stdio.h>

int test(float x[]){
    x[0] = 2.5;
    x[3] = 6.5;
    x[6] = 9.5;
    return 0;
}

int main(){
    float x[5];

    printf("%d", test(x));

    return 0;
}
