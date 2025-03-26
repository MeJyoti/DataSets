#include<stdio.h>

int fun2(int n);

int fun1(int n){
    if(n < 1){
        return 0;
    }

    printf("Function 1 : %d \n", n);
    fun2(n-1);

    return 1;
}

int fun2(int n){
    if(n < 1){
        return 0;
    }

    printf("Function 2 : %d \n", n);
    fun1(n-5);

    return 1;
}

int main(){
    int n;
    scanf("%d", &n);

    int r = fun1(n);
    printf("%d", r);

    return 0;
}
