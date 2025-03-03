#include <stdio.h>

void printArray(int array[], int n);
void mergeSort(int array, int mid, int low, int high);

void mergeSort(int array, int mid, int low, int high){
    int i, j, k, B[100];
    i = low,
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high){
        if (array[i] < array[j]){
            B[k] = array[i];
            i++; k++;
        }
        else{
            B[k] = array[j];
            j++; k++;
        }

    }
    while (i <= mid){
        B[k] = array[i];
        k++; i++;
    }

    while (i <= high){
        B[k] = array[j];
        k++; j++;
    }   
}

void printArray(int array[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
}


int main(){
    int n = 7;
    int array = {9, 14, 4, 8, 7, 5, 6};
    printArray(array, n);
    mergeSort
    return 0;
}
