// Swap Alternate

/*
For odd - 
Input: arr[5] = {1,2,7,8,5}
Output: {2,1,8,7,5}

For even - 
Input: arr[5] = {1,2,3,4,5,6}
Output: {2,1,4,3,6,5}
*/

#include <iostream>
using namespace std;

// Printing the array
void printArray(int arr[], int size) {
    for (int i = 0; i<size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Swap function
void altSwap(int arr[], int size){
    for (int i = 0; i<size; i = i+2) {
        if (i+1<size) {
            swap (arr[i], arr[i+1]);

            /* Without swap function we can use a temporary variable- 

            temp = arr[1];
            arr[1] = arr[0];
            arr[0] = temp;
            
            */
        }
    }
}

int main() {

    int size;
    cout <<"Enter the size of the array = ";
    cin >> size;

    int arr[100];

    cout << "Enter the array = ";
    for(int i = 0; i<size; i++) {
        cin >> arr[i];
    }

    altSwap(arr, size);
    printArray(arr, size);    

    return 0;
}