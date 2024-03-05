// SELECTION SORT

/*
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest 
(or largest) element from the unsorted portion of the list and moving it to the sorted portion of the 
list.
*/

#include <iostream>
using namespace std;

// Function to print the array
int printArray(int arr[], int n) {

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Code for Selection Sort
void selectionSort(int arr[], int n)
{    
    for (int i = 0; i<n-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j<n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);

    }
}

int main() {

    int n;
    cout << "Enter the size of the array = ";
    cin >> n;

    int arr[100];
    cout << "Enter the array = ";
    for (int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    cout << "Sorted Array: ";
    selectionSort(arr, n);
    printArray(arr, n);

    return 0;
}

//  