#include <stdio.h>

int sum(int n){
    if(n < 1)
        return 0;

    int s = n + sum(n-1);

    return s;
}

int main(){
    int n;
    scanf("%d", &n);

    int s = sum(n);
    printf("%d \t %d", n, s);

    return 0;
}
