// PRIME NUMBER

#include <iostream>
using namespace std;

class Solution{
private:
    bool isPrime(int n)
    {
        for (int i = 2; i<n; i++)
        {
            if (n%2 == 0)
            {
                return false;
            }

            return true;
        }
    }

public:
    int countPrime(int n)
    {
        int count = 0;

        for (int i = 2; i<n; i++)
        {
            if (isPrime(i))
            {
                count++;
            }
        }
    }

};

int main() {

    int n;
    cout << "Enter number = ";
    cin >> n;

    Solution(n);


    return 0;
}