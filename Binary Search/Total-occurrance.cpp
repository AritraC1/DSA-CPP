// Total number of occurrance

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
        else if (key > arr[key]) 
        {
            start = mid + 1;
        }

        // Left Part - key < arr[key]
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
        else if (key > arr[key]) 
        {
            start = mid + 1;
        }

        // Left Part - key < arr[key]
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

    int first = firstOccurance(arr, size, key);
    int last = lastOccurance(arr, size, key);

    int total = (last-first) + 1;

    cout << "Total occurance of the key " << key << " is = " << total << endl;

    return 0;
}