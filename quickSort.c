#include <stdio.h>

void quickSort(int *array, int low, int high);


int partition(int array, int low, int high){
    int pivot = array[low];
    int i = low + 1;
    int j = high;
    int temp, temp1;
    do{
    while (array[i] <= pivot){
        i++;
    }

    while (array[j] > pivot){
        j--;
    }

    if (i < j){
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
    } while (i < j);

    temp1 = array[low];
    array[low] = array[j];
    array[j] = temp1;
    return j;
    
}

void quickSort(int *array, int low, int high){
    int partitionIndex;

    if (low < high){
        partitionIndex = partition(array, low, high);
        quickSort(array, low, partitionIndex - 1);
        quickSort(array, partitionIndex + 1, high);
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
    printArray(array, n);
    quickSort(array, 0, n - 1);
    printArray(array, n);
    return 0;
}