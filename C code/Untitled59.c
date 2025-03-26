#include <stdio.h>

int recFun(int num){
    if(num == 0)
        return 0;

    printf("Before Rec: %d\n", num);

    recFun(num - 1);

    printf("After Rec: %d\n", num);

    return 1;
}

int norFun(int num){
    recFun(num);

    return 0;
}

int main(){
    int num;
    scanf("%d", &num);

    norFun(num);

    return 0;
}
