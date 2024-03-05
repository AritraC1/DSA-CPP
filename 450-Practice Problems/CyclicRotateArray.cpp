// Write a program to cyclically rotate an array by one.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void cyclicRotate(int arr[], int n) {
    
    int temp = arr[n-1];

    for (int i = n-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = temp;

}

int main() {

    int n=5; // Size

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Original: ";
    for (int i = 1; i<=n; i++)
    {
        cout << i << " ";
    }

    cout << "\nRotated: ";
    cyclicRotate(arr, n);

    for (int i = 0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}