#include <stdio.h>

int test(long long x[]){
    x[0] = 25;
    x[3] = 65;
    x[6] = 95;
    return 0;
}

int main(){
    long long x[5];

    printf("%d", test(x));

    return 0;
}
