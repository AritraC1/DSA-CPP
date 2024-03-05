// Find the "Kth" max and min element of an array 

#include <iostream>
using namespace std;

// function to sort array using selection sort
void selectionSort(int arr[], int size)
{    
    for (int i = 0; i<size-1; i++)
    {
        int minIndex = i;

        for (int j = i+1; j<size; j++)
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

    int size = 6;
    
    int k;
    cout << "Enter the value of k = ";
    cin >> k;

    int arr[6] = {7, 10, 4, 3, 20, 5};

    selectionSort(arr, size);
    cout << k <<"th Smallest = " << arr[k] << endl;;
    cout << k <<"th largest = " << arr[size-k];

    // cout << arr[k] << arr[size-k] (sorted array me)


    return 0;
}