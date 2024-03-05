// Printing count using Recursion

#include <iostream>
using namespace std;

void print(int num) {

    //  Base Case
    if (num == 0) return ;

    cout << num << endl;

    // Recursive relation
    print (num-1);
}

int main() {

    int num;
    cout << "Enter number: "; 
    cin >> num;

    print(num);

    return 0;
}