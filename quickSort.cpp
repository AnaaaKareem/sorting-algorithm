#include <iostream>
using namespace std;

int partition(int* arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high + 1;

    while (i < j) {
        do {
            i++;
        } while (arr[i] <= pivot);

        do {
            j--;
        } while (arr[j] > pivot);

        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}


int quickSort(int* arr, int start, int end) {
    if (start < end) {
        int pIndex = partition(arr, start, end);
        quickSort(arr, start, pIndex-1);
        quickSort(arr, pIndex+1, end);
    }
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr+i) << endl;
    }
}

int main() {
    int size = 5
    int arr[size] = {5, 4, 3, 2, 1};

    insertionSort(arr, size);
    printArr(arr);

    return 0;
}