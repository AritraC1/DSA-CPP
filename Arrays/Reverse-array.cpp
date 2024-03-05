// Reverse Array

#include <iostream>
using namespace std;

// Reverse array function
void reverse(int arr[], int size){

    int start = 0;
    int end = size-1;

    while(start<=end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// Print array function
void printArray(int arr[], int size) {

    for (int i = 0; i<size; i++) {
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main() {

    int size;
    cout << "Enter the size of the array = ";
    cin >> size;

    int arr[100];
    cout << "Enter the array = ";

    for (int i = 0; i<size; i++) {
        cin >> arr[i];
    }

    reverse(arr, size);

    cout << "Reversed array is = ";
    printArray(arr, size);

    return 0;
}