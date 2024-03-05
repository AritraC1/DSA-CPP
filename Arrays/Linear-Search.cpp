// Linear Search

#include <iostream>
using namespace std;

/*

// My function

int presentOne(int arr[], int n = 10) {

    for (int i = 0; i<n; i++) {

        if (arr[i] == 1) {
            cout << "1 is present in the array" << endl;
        }

        else {
            cout << "1 is not present in the array" << endl;
        }
    }
}

*/

bool search(int arr[], int size, int key) {

    for (int i = 0; i<size; i++) {

        if (arr[i] == key) {
            return 1;
        }
    }

    return 0;

}

int main() {

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    int key;
    cout << "Enter the element need to be searched = ";
    cin >> key;

    bool found = search(arr, 10, key);

    if (found) {
        cout << "Key is present" << endl;
    }

    else {
        cout << "Key is not present" << endl;
    }

    return 0;
}