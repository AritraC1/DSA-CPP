// First-Last-Element

/*
Problem statement
You have been given a sorted array/list 'arr' 
consisting of ‘n’ elements. You are also given 
an integer ‘k’.

Now, your task is to find the first and last 
occurrence of ‘k’ in 'arr'.

Note :
1. If ‘k’ is not present in the array, then the 
first and the last occurrence will be -1. 
2. 'arr' may contain duplicate elements.

Example:
Input: 'arr' = [0,1,1,5] , 'k' = 1

Output: 1 2

Explanation:
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the 
first and last occurrence of 1 will be 
1(0 - indexed) and 2.
*/

#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + ((end - start) / 2);

    int ans = -1;

    while (start<=end) 
    {
        if (arr[mid] == key) 
        {
            ans = mid;
            end = mid-1;
        }

        // Right Part
        else if (key > arr[mid]) 
        {
            start = mid + 1;
        }

        // Left Part - key < arr[mid]
        else
        { 
            end = mid-1;
        }

        mid = start + ((end-start)/2);
    }

    return ans;
}

int lastOccurance(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + ((end - start) / 2);

    int ans = -1;

    while (start<=end) 
    {
        if (arr[mid] == key) 
        {
            ans = mid;
            start = mid+1;
        }

        // Right Part
        else if (key > arr[mid]) 
        {
            start = mid + 1;
        }

        // Left Part - key < arr[mid]
        else
        { 
            end = mid-1;
        }

        mid = start + ((end-start)/2);
    }

    return ans;
}

pair<int, int> firstLast(int arr[], int size, int key) {
    pair<int, int> p;

    p.first = firstOccurance(arr, size, key);
    p.second = lastOccurance(arr, size, key);

    return p;
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

    int key;
    cout << "Enter the key = ";
    cin >> key;

    cout << "First occurrance of the key " << key << " is at index = " << firstOccurance(arr, size, key) << endl;
    cout << "Last occurrance of the key " << key << " is at index = " << lastOccurance(arr, size, key)  << endl;

    return 0;
}