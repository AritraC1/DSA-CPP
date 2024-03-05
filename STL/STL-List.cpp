// STL LIST
#include <iostream>
#include <list>
using namespace std;

int main() {

    list <int> l;

    l.push_back(1);
    l.push_back(2);

    for (int i:l) cout << i << " ";

    cout << endl;

    l.erase(l.begin());
    cout << "After erase -> ";

    for (int i:l) cout << i << " ";

    cout << "\nSize of the list -> " << l.size();

    cout << endl;

    // Prints '100' 5 times.
    list <int> n(5, 100);
    cout << "Printing n -> ";
    for (int i:n) cout << i << " ";


    return 0;
}