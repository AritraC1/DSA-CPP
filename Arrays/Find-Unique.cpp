// Find Unique

/*
Problem statement
You have been given an integer array/list(ARR) 
of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are 
present twice and one number is present only 
once.

You need to find and return that number which 
is unique in the array/list.

 Note:
Unique element is always present in the 
array/list according to the given condition.
*/

#include <iostream>
using namespace std;

// Unique function
int findUnique(int *arr, int n)
{
    int ans = 0;
    
    //Write your code here
    for (int i = 0; i<n; i++) {
        ans = ans ^ arr[i];
    }

    return ans;    

}

int main() {

    int n;
    cout <<"Enter the size of the array = ";
    cin >> n;

    int arr[100];

    cout << "Enter the array = ";
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    cout << "The unique element is = ";
    cout << findUnique(arr, n);

    return 0;
}