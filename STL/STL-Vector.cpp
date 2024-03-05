// STL VECTOR

/*
Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is 
inserted or deleted, with their storage being handled automatically by the container. Vector elements are 
placed in contiguous storage so that they can be accessed and traversed using iterators.

Note:
Vector capacity differs from Capacity. While Capacity is simply how many elements the vector currently has, capacity is 
for how many elements it allocated/reserved memory for
*/

#include <iostream>
// Vector library
#include <vector>
using namespace std;

int main() {

    vector<int> v;
    // Capacity of a vector
    cout << "Capacity: " << v.capacity() << endl;

    // Inserting an element
    v.push_back(1);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity: " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity: " << v.capacity() << endl;

    // Size of the vector
    cout << "Size of the vector: " << v.size() << endl;

    cout << "Element at 2nd Index: " << v.at(2) << endl;
    
    // Front/Back
    cout << "Front: " << v.front() << endl;
    cout << "Back: " << v.back() << endl;

    cout << "Before Pop: ";
    for (int i:v) 
    {
        cout << i << " ";
    }

    cout << endl;
    v. pop_back(); // Discards the last element

    cout << "After Pop: ";
    for (int i:v) 
    {
        cout << i << " ";
    }
    
    // Clear vector - Size 0 hota h but capacity 0 nhi hoti h
    
    // Before Clear
    cout << "\nSize: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // After Clear
    v.clear();
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    //Capacity is same.

    vector<int> a(5, 1);
    cout << "A: ";
    for (int i:a) 
    {
        cout << i << " ";
    }

    return 0;
}