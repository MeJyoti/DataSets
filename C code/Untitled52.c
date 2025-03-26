#include <stdio.h>

int makeArray(int n){
    if(n <= 0){
        return 0;
    }
    int arr[n];
    return 1;
}

int main(){
    int n;

    scanf("%d", &n);
    if(makeArray(n) == 1){
        printf("Array made.");
    }
    else{
        printf("Array not made.");
    }
    return 0;
}
