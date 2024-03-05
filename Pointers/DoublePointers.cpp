// Double Pointers

#include <iostream>
using namespace std;

// Function
void update(int **p)
{
    //p = p + 1; // No change

    //*p = *p + 1;
    
    **p = **p + 1;
}

int main() {

    /*

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout << i << endl; // prints the value of i
    cout << p << endl; // prints address
    cout << *p << endl; // prints the value of i
    cout << **p2 << endl; // prints the value of *p that is equal to i that is 5

    cout <<  endl;

    // Prints the address
    cout << &i << endl;
    cout << p << endl;
    cout << *p2 << endl;
    cout << &p << endl;
    cout << p2 << endl;

    cout << endl;

    

    // Double Pointers and Functions 

    cout << "Before: " << i << endl;    
    cout << "Before: " << p << endl;    
    cout << "Before: " << p2 << endl;    

    update(p2);

    cout << "After: " << i << endl;
    cout << "After: " << p << endl; // Value of p changes in (*p = *p + 1)
    cout << "After: " << p2 << endl; // Value of p2 changes in (**p = **p + 1)

    */

    return 0;
} 