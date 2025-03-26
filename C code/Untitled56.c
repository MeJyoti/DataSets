#include <stdio.h>

int operateArray(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i] = i;
    }

    return 0;
}

void printValue(int arr[]){
    printf("%d  %d  %d  ", arr[0], arr[3], arr[5]);
}

int makeArray(int n){
    if(n <= 5){
        return 0;
    }

    int arr[n];
    operateArray(arr, n);
    printValue(arr);

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
