#include <iostream>
using namespace std;

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    bubbleSort(arr, size);
    printArr(arr);

    return 0;
}