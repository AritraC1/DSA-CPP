// PAIR_SUM

/*
Problem statement
You are given an integer array 'ARR' of size 
'N' and an integer 'S'. Your task is to return 
the list of all pairs of elements such that 
each sum of elements of each pair equals 'S'.

Note:

Each pair should be sorted i.e the first value 
should be less than or equals to the second 
value. 

Return the list of pairs sorted in 
non-decreasing order of their first value. 
In case if two pairs have the same first value,
the pair with a smaller second value should 
come first.
*/

#include <iostream>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s, int n)
{

    vector<vector<int>> ans;

    for (int i = 0; i<n; i++)
    {
        for (int j = i+1; j<n; j++) 
        {
            if (arr[i] + arr[j] == s) 
            {
                //return {i,j};
                vector<int> temp;
                temp.push_back((arr[i], arr[j]));
                ans.push_back(temp);

            }
        }
    }

    return ans;

}

int main() {

    int n;
    cout <<"Enter the size of the array = ";
    cin >> n;

    int arr[100];

    cout << "Enter the array = ";
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    int s;
    cout << "Enter the target integer = ";
    cin >> s;

    cout << "The pair sums for the target integer " << s << " is --->" << endl;
    cout << pairSum(arr, s,n);

    return 0;
}