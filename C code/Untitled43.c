#include <stdio.h>

int test(char x[]){
    x[0] = 'a';
    x[3] = '7';
    x[6] = 'g';
    return 0;
}

int main(){
    char x[5];

    printf("%d", test(x));

    return 0;
}
