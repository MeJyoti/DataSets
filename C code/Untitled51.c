#include <stdio.h>

int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    if(a == 0){
        if(b < 0){
            b = -1;
        }
        else{
            b = 1;
        }
        a = 100;
    }
    else if(a < 20){
        if(b < 10){
            b = 9;
        }
        else{
            b = 11;
        }
        a = 50;
    }
    else{
        if(b < 50){
            b = 49;
        }
        else if(b == 50){
            b = 100;
        }
        else{
            b = 99;
        }
        a = 10;
    }

    printf("a = %d and b = %d", a, b);
    return 0;
}
