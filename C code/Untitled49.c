#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a == 0){
        a = 100;
    }
    else if(a < 20){
        a = 50;
    }
    else{
        a = 10;
    }

    printf("a = %d", a);
    return 0;
}
