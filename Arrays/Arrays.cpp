// ARRAYS

/*
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value

To declare an array, define the variable type, specify the name of the array followed by square brackets and specify the number of elements it should store:

Eg1 - string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
Eg2 - int myNum[3] = {10, 20, 30};

Note an array starts with index zero [0].
*/

#include <iostream>
using namespace std;

// array with function
int printArray(int arr[], int size) {

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main() {

    // declaring array
    int first[5] = {1,2,3,4,5};

    // Printing the array
    for (int i = 0; i<5; i++) {
        cout << first[i] << " ";
    }

    cout << endl;
    cout << endl;

    // accessing an array
    cout << "The value at 3rd index is = " << first[3] << endl;

    cout << endl;

    // If the size of the array is too big and we have entered only few values then the rest will be 0
    int second[15] = {2,7};
    int n = 15;

    for (int i=0; i<n; i++) {
        cout << second[i] << " ";
    }

    cout << endl;
    cout << endl;

    // initialising all locations with 0
    int third[10] = {0};
    int a = 10;

    for (int i=0; i<a; i++) {
        cout << third[i] << " ";
    }

    cout << endl;
    cout << endl;

    // Calling Array function
    int forth[15] = {5,6};
    int b = 15;
    printArray(forth, 15);

    cout << endl;

    // Size of fifth array
    int fifth[10] = {5,6,7,9};
    int c = 10;
    printArray(fifth, 10);

    cout << endl;

    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "The size of fifth array is = " << fifthSize << endl;

    cout << endl;

    // Types of array
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    double firstDouble[6];
    float firstFloat[7];
    bool firstBool[8];

}

