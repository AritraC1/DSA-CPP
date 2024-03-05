// STL ARRAY

#include <iostream>
// STL for Array
#include <array> // this STL array is static
using namespace std;

int main() {

    // Normal initialising Array
    int arr[5] = {1, 2, 3, 4, 5};

    // Creating array from stl
    array<int, 4> a = {1,2,3,4};

    // Size
    int size = a.size();

    // Printing the array
    cout << "The array -> ";
    for (int i = 0; i<size; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    // "at" Operation
    cout << "Element at 2nd index -> " << a.at(2) << endl;
    
    // 0 - False
    // 1 - True
    cout << "Empty or not -> " << a.empty() << endl;

    // First and last element
    cout << "First Element -> " << a.front() << endl;
    cout << "Last Element -> " << a.back() << endl;
    
    return 0;

}