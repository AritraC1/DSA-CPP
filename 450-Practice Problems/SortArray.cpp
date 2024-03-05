// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    vector<int> v = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};

    sort(v.begin(), v.end());
    
    cout << "Sorted: ";

    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}