#include<stdio.h>

int fact(int n){
    if(n <= 1)
        return 1;

    int f = n * fact(n-1);

    return f;
}

int main(){
    int n;
    scanf("%d", &n);

    int f = fact(n);
    printf("%d \t %d", n, f);

    return 0;
}
