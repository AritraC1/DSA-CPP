// Find Duplicates

/*
Problem statement
You are given an array ‘ARR’ of size ‘N’ 
containing each number between 1 and 
‘N’ - 1 at least once. There is a single 
integer value that is present in the array 
twice. Your task is to find the duplicate 
integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the 
duplicate integer value present in the 
array is 4. Hence, the answer is 4 in 
this case.

Note :
A duplicate number is always present in 
the given array.
*/

#include <iostream>
using namespace std;

/*
// My Method
void findDuplicate(int arr[], int n){

    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[j];
            }
        }
        
    }
}
*/

// Love Babbar's Method
int findDuplicate(int arr[], int n){
    int ans = 0;

    // XOR-ing all array elements 
    for (int i = 0; i<n; i++) { // n = arr.size()
        ans = ans ^ arr[i];
    }

    //  XOR [1,N-1]
    for (int i = 1; i<n; i++) {
        ans = ans ^ i;
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

    cout << "The duplicate number is = ";
    // findDuplicate(arr, n);

    cout << findDuplicate(arr, n);

    return 0;
}