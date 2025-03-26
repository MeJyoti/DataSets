#include<stdio.h>

int fib(int n){
    if(n <= 1)
        return n;

    int f = fib(n-1) + fib(n-2);

    return f;
}

int main(){
    int n;
    scanf("%d", &n);

    int f = fib(n);
    printf("%d", f);

    return 0;
}
