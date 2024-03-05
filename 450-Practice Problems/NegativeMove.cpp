// Move all the negative elements to one side of the array 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> arr = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    sort(arr.begin(), arr.end());

    cout << "Answer: ";
    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}