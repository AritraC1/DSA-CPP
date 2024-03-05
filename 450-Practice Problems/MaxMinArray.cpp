// Maximum and Minimum element in an array

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// Maximum element
int MaxNum(int arr[], int size)
{
    int maximum = INT_MIN;
    

    for (int i = 0; i<size; i++)
    {
        maximum = max(maximum, arr[i]);
    }

    return maximum;

}

// Minimum Element
int MinNum(int arr[], int size)
{
    int minimum  = INT_MAX;

    for (int i = 0; i<size; i++)
    {
        minimum = min(minimum, arr[i]);
    }

    return minimum;
}


int main() {

    int size = 5;

    int arr[5] = {1, 2, 3, 4, 5};

    cout << "Max and Min of the given array are = " << MaxNum(arr, size) << " , " << MinNum(arr, size) << endl;

    return 0;
}