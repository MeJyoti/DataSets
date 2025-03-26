#include <stdio.h>

int test(int x[], int y[]){
    x[0] = 2;
    x[3] = 6;
    x[50] = 9;
    y[0] = 10;
    y[100] = 40;
    return 0;
}

int main(){
    int x[5];
    int y[7];

    printf("%d", test(x, y));

    return 0;
}
