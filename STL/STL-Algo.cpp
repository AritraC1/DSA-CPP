// STL ALGORITHM

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<int> v;
    v.push_back (1);
    v.push_back (3);
    v.push_back (6);
    v.push_back (7);

    // Binary search
    // 0 - False
    // 1 - True
    cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "Finding 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;

    cout << endl;

    // Upper/Lower Bound
    cout << "Lower bound -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    cout << endl;

    // Max/Min
    int a = 5;
    int b = 10;

    cout << "Max -> " << max(a,b) << endl;
    cout << "Min -> " << min(a,b) << endl;

    cout << endl;

    // Swap
    swap(a,b);
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;

    cout << endl;

    // Reverse
    string abcd = "abcd";

    reverse(abcd.begin(), abcd.end());
    cout << "String -> "<< abcd << endl;

    // Rotate
    rotate(v.begin(), v.begin()+1, v.end());
    cout << "After rotate -> ";
    for (int i:v)
    {
        cout << i << " ";
    }

    cout << endl;

    // Sort - it is based on introsort. It is combination of 3 sorting algorithms : (1) Quick sort (2) Heap Sort (3) Insertion Sort
    sort(v.begin(), v.end());
    cout << "Sorted -> ";
    for (int i:v)
    {
        cout << i << " ";
    }

    return 0;
}