// Search in Rotated Sorted Array

/*
Problem statement
You have been given a sorted array/list 'arr' 
consisting of ‘n’ elements. You are also given 
an integer ‘k’.

Now the array is rotated at some pivot point 
unknown to you.

For example, if 'arr' = [ 1, 3, 5, 7, 8], then 
after rotating 'arr' at index 3, the array will be 'arr' = [7, 8, 1, 3, 5].

Now, your task is to find the index at which ‘k’ 
is present in 'arr'.

Note :
1. If ‘k’ is not present in 'arr', then print -1.
2. There are no duplicate elements present in 
'arr'. 
3. 'arr' can be rotated only in the right 
direction.

Example:

Input: 'arr' = [12, 15, 18, 2, 4] , 'k' = 2

Output: 3

Explanation:
If 'arr' = [12, 15, 18, 2, 4] and 'k' = 2, then 
the position at which 'k' is present in the 
array is 3 (0-indexed).
*/

#include <iostream>
using namespace std;

int getPivot(int arr[], int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s<e) {
        if (arr[mid] >= arr[0])
        {
            s = mid+1;
        }

        else
        {
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s;
}

int binarySearch(int arr[], int s, int e, int key) {
    int s = s;
    int e = e;
    int mid = s + (e-s)/2;

    while (s <= e) 
    {
        if (arr[mid] == key) 
        {
            return mid;
        } 

        else if (key > arr[mid])
        {
            s = mid+1;
        }

        else
        {
            e = mid -1;
        }

        mid = s + (e-s)/2;
    }

    return -1;
}

int findPosition(int arr[], int n, int k){
    
    int pivot = getPivot(arr, n);

    if(k > arr[pivot]) {
        
    }
}

int main() {

    int n;
    cout << "Enter the size of the array = ";
    cin >> n;

    int arr[100];
    cout << "Enter the array = ";

    for (int i = 0; i<size; i++) {
        cin >> arr[i];
    }

    return 0;
}