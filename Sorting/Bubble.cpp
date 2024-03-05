// BUBBLE SORT

/*
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they 
are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time 
complexity is quite high.
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

// Code for Bubble Sort
void BubbleSort(int arr[], int n) 
{
    /*
    // Method - 1

    // for round : 1 to n-1
    for (int i = 1; i<n; i++)
    {
        for (int j = 0; j<n-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    */

    // Method - 2 (Optimised)
    for (int i = 1; i<n; i++)
    {
        bool swapped = false;

        for (int j=0; j<n-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            // Already sorted
            break;
        }
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
    BubbleSort(arr, n);
    printArray(arr, n);


    return 0;
}