#include <iostream>
using namespace std;

void insertionSort(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        int key = arr[i];
        int prev = i - 1;
        while (prev >= 0 and key < arr[prev]) {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev+1] = key;
    }
}

void printArr(int* arr, int size) {
    for (int i = 0; i < size, i++) {
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