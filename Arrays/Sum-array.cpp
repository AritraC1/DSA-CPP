// Sum of all elements in array

#include <iostream>
using namespace std;

int sumArray(int num[], int n) {
    
    int sum = 0;

    for (int i = 0; i<n; i++) {
        sum = sum + num[i];
    }

    return sum;

}

int main() {

    int size;
    cout << "Enter the size of the array = ";
    cin >> size;

    int num[100];
    cout << "Enter the array = ";

    for (int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << "The sum of the elements of the given array is = " << sumArray(num, size) << endl;

    return 0;

}