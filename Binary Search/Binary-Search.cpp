// Binary Search

/*
Binary Search is defined as a searching
algorithm used in a sorted array by repeatedly 
dividing the search interval in half.

Time Complexity - O(Log N)

Binary Search better than Linear Search - 
1. More efficent 
2. Less no. of comparison in worst case scenario

*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start  = 0;
    int end = size-1;

    // This formula will cause a problem as it may reach outside this the range of int
    // int mid = (start + end)/2;

    // so the solve the problem we will use
    int mid = start + ((end-start)/2);

    while (start <= end) {

        if (arr[mid] == key) {
            return mid;
        }

        // to traverse left or right - 
        // Left part --> end = mid - 1 
        // Right part --> start = mid + 1 

        // Right part
        if (arr[mid] < key) {
            start = mid + 1;
        }

        // Left Part
        else {
            end = mid-1;
        }

        mid = start + ((end-start)/2);
    }
    return -1;
}

int main() {

    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int index_even = binarySearch(even, 6, 12);
    int index_odd = binarySearch(odd, 5, 11);

    cout << "Index of 12 is " << index_even << endl;
    cout << "Index of 11 is " << index_odd << endl;

    return 0;
}