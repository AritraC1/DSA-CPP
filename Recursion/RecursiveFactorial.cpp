// Factorial Using Factorial

#include <iostream>
using namespace std;

int factorial(int n) {

    // Base case
    if (n == 0) return 1;

    int a = factorial(n-1);
    int b = n * a;

    return b;
}

int main() {

    int n;
    cout << "Enter number: ";
    cin >> n;

    int ans = factorial(n);

    cout << "Factorial of " << n << " is: " << ans << endl;


    return 0;
}