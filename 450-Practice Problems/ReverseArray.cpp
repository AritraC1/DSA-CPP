// Reverse an array

#include <iostream>
#include <algorithm>
using namespace std;

// Function to print array
void printArray(int arr[], int size)
{
    for (int i = 0; i<size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Function to reverse an array
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size-1;

    while(start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {

    int size = 5;

    int arr[5] = {1, 2, 3, 4, 5};

    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}