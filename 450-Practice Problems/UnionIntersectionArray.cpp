// Find the Union and Intersection of the two sorted arrays.

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> getUnion(int arr1[], int arr2[], int size1, int size2)
{
    set<int> s;

    // Array 1
    for (int i = 0; i < size1; i++) {
        s.insert(arr1[i]);
    }

    // Array 2
    for (int i = 0; i < size2; i++) {
        s.insert(arr2[i]);
    }

    vector<int> vec(s.begin(), s.end());
 
    return vec;

}

vector<int> getIntersection(int arr1[], int arr2[],int size1, int size2)
{
    set<int> st;

    for (int i = 0; i < size1; i++) {
        st.insert(arr1[i]);
    }

    vector<int> res;
 
    // Avoiding duplicates and adding intersections
    for (int i = 0; i < size2; i++) {
        if (st.find(arr2[i]) != st.end()) {
            res.push_back(arr2[i]);
            st.erase(arr2[i]);
        }
    }
    return res;

}

int main() {

    int size1 = 5;
    int size2 = 4;

    int arr1[5] = {1,3,2,4,5}; 
    int arr2[4] = {3,4,6,8}; 

    // Calling Union Function
    cout << "Union: " ;
    vector<int> uni = getUnion(arr1, arr2, size1, size2);
    for (int i : uni)
    {
        cout << i << " ";
    }

    // Calling Intersection Function
    cout << "\nIntersection: ";
    vector<int> inter = getIntersection(arr1, arr2, size1, size2);
    for (int i : inter)
    {
        cout << i << " ";
    }

    return 0;
}