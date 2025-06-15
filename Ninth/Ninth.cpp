#include <iostream>
using namespace std;

int main() {
    //1
    int size = 5;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    //  2 
    int posToAdd = 2;
    int valueToAdd = 99;
    int* newArr = new int[size + 1];
    for (int i = 0; i < posToAdd; i++) {
        newArr[i] = arr[i];
    }
    newArr[posToAdd] = valueToAdd;
    for (int i = posToAdd; i < size; i++) {
        newArr[i + 1] = arr[i];
    }
    delete[] arr;
    arr = newArr;
    size++;

    // 3 
    int indexToDelete = 1;
    int* tempArr = new int[size - 1];
    for (int i = 0; i < indexToDelete; i++) {
        tempArr[i] = arr[i];
    }
    for (int i = indexToDelete + 1; i < size; i++) {
        tempArr[i - 1] = arr[i];
    }
    delete[] arr;
    arr = tempArr;
    size--;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}
