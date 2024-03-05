// INSERTION SORT

/*
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your 
hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are 
picked and placed at the correct position in the sorted part.
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void InsertionSort(int arr[], int n)
{
    for (int i = 1; i<n; i++)
    {
        int temp = arr[i];

        int j = i-1;

        for (; j >=0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j+1] = arr[j];
            }

            else
            {
                // stop
                break; 
            }
        }

        arr[j+1] = temp;
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
    InsertionSort(arr, n);
    printArray(arr, n);

    return 0;
}