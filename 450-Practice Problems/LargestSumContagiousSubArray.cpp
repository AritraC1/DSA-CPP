// find Largest sum contiguous Subarray [V. IMP]

#include <iostream>
#include <algorithm>
using namespace std;

int largestSum(int arr[], int n)
{
    int sum = 0;
    int maxi = arr[0];

    for (int i = 0; i<n; i++)
    {
        sum = sum + arr[i];

        maxi = max(maxi, sum);

        if (sum < 0) sum = 0;
    }

    return maxi;
}

int main() {

    int n=8; // Size

    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};

    cout << "Largest sum: " << largestSum (arr, n);

    return 0;
}