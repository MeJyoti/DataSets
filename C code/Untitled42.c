#include <stdio.h>

int test(int x[]){
    x[0] = 2;
    x[3] = 6;
    x[6] = 9;
    return 0;
}

int main(){
    int x[5];

    printf("%d", test(x));

    return 0;
}
