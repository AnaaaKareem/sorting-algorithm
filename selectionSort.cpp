#include <iostream>
using namespace std;

void selectionSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
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

    selectionSort(arr, size);
    printArr(arr);

    return 0;
}