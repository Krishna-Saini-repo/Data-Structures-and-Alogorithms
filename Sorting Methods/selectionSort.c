#include <stdio.h>

void selectionSort(int *array, int n);

void selectionSort(int *array, int n){
    int minIndex;
    for (int i = 0; i < n - 1; i++){
        minIndex = i;
        for (int j = i + 1; j < n; j++){
            if (array[j] < array[minIndex]){
                minIndex = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

void printArray(int array[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
}

int main(){
    int n = 5;
    int array[] = {4, 1, 5, 2, 3};

    selectionSort(array, n);
    printArray(array, n);
    return 0;
}
