// Power of 2 using Recursion

#include <iostream>
using namespace std;

int power(int n) {

    // Base case
    if (n == 0) return 1;

    // Recursive Relation
    int a = power(n-1);
    int b = 2 * a;

    // return 2 * power(n-1)

    return b;
}

int main() {

    int n;
    cout << "Enter number: ";
    cin >> n;

    int ans = power(n);

    cout << "2^" << n << " = " << ans << endl;

    return 0;
}