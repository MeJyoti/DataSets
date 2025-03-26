#include <stdio.h>

int operateArray(int arr[], int n){
    printf("%d  %d  %d  ", arr[0], arr[3], arr[5]);

    return 0;
}

int makeArray(int n){
    if(n <= 5){
        return 0;
    }

    int arr[n];
    arr[0] = 7;
    arr[3] = 8;
    arr[5] = 9;
    operateArray(arr, n);

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
