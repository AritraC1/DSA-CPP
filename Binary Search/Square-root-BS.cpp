// Square Root

/*
Problem statement
You are given a positive integer ‘n’.

Your task is to find and return its square 
root. If ‘n’ is not a perfect square, then 
return the floor value of sqrt(n).

Example:

Input: ‘n’ = 7

Output: 2

Explanation:
The square root of the number 7 lies 
between 2 and 3, so the floor value is 2.
*/

#include <iostream>
using namespace std;

long long int sqrt(int n) {

    int start = 0;
    int end = n;

    long long int ans = -1;

    long long int mid = start + (end-start)/2;

    while (start<=end) {

        if (mid*mid == n) 
        {
            return mid;
        }

        else if (mid*mid < n) 
        {
            ans = mid;
            start = mid +1;
        }

        else
        {
            end = mid-1;
        }

        mid = start + (end-start)/2;

    }

    return ans;

}

int main() {

    int n;
    cout << "Enter the number = ";
    cin >> n;

    cout << "The square root of the number is = " << sqrt(n) << endl;;

    return 0;
}