// To find the maximum and minimum element of an array

#include <iostream>
#include <climits>
using namespace std;

// Max Element
int getMax(int num[], int n) {
    
    int maxim = INT_MIN;

    for (int i = 0; i<n; i++) {

        // Using predefined function - max/min
        maxim = max(maxim, num[i]);

        /*
        if(num[i] > max) {
             max = num[i];
        }
        */
    }

    return maxim;
}

// Min Element
int getMin(int num[], int n) {
    
    int min = INT_MAX;

    for (int i = 0; i<n; i++) {
        if(num[i] < min) {
            min = num[i];
        }
    }

    return min;
}

int main() {

    int size;
    cout << "Enter the size of the array = ";
    cin >> size;

    // Not a good practice - int num[size]

    int num[100];

    cout << "Enter the array = ";

    for (int i = 0; i<size; i++) {
        cin >> num[i];
    }

    cout << "The maximum value is = " << getMax(num, size) << endl;
    cout << "The minimum value is = " << getMin(num, size) << endl;

    return 0;
}