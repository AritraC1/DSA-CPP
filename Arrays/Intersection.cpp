// Intersection of two arrays **(Important)**

/*
Problem statement
You are given two arrays 'A' and 'B' of 
size 'N' and 'M' respectively. Both these 
arrays are sorted in non-decreasing order. 
You have to find the intersection of these 
two arrays.

Intersection of two arrays is an array 
that consists of all the common elements 
occurring in both arrays.

Note :
1. The length of each array is greater 
than zero.
2. Both the arrays are sorted in 
non-decreasing order.
3. The output should be in the order of 
elements that occur in the original arrays.
4. If there is no intersection present 
then return an empty array.
*/

#include <iostream>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// 2-pointer Approach - Best Method
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i = 0, j = 0;
    vector<int> ans;

    while(i<n && j<m) {

        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j])
        {
            i++;
        }

        else // arr1[i] > arr2[j]
        {
            j++;
        }
    }
    return ans;

}


/*
// Original Method
int intersection(int arr1[], int arr2[], int n, int m) {

    int ans;
    
    for (int i = 0; i<n; i++) {
        int element = arr1[i];

        // We are starting from the start of aaray, need to optimise it
        for (int j = 0; j<m; j++) {

            //  Since the arrays are sorted in non-decreasing order.
            if(element<arr2[j]) {
                break;
            }
            
            if (element == arr2[j]) {
                return element;
                arr2[j] = INT_MIN;
                break;
            }
        }
    }

    return ans;
}
*/

int main() {

    int n;
    cout <<"Enter the size of the array 1 = ";
    cin >> n;

    int arr1[100];

    cout << "Enter the array 1 = ";
    for(int i = 0; i<n; i++) {
        cin >> arr1[i];
    }

    int m;
    cout <<"Enter the size of the array 2 = ";
    cin >> m;

    int arr2[100]; 

    cout << "Enter the array 2 = ";
    for(int i = 0; i<n; i++) {
        cin >> arr2[i];
    }

    cout << "The interection of 2 arrays are = ";
    findArrayIntersection(arr1, n, arr2, m);

    return 0;
}