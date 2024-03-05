// STL MAP

/*
Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a 
mapped value. No two mapped values can have the same key values.
*/

#include <iostream>
#include <map>
using namespace std;

int main() {

    map <int, string> m;

    // Method 1 to insert
    m[1] = "Harry";
    m[2] = "Hermoine";
    m[13] = "Ron";

    // Method 2 to insert
    m.insert({5, "Dumbledore"});

    cout << "Before Erase : "; 
    for (auto i:m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // Count
    cout << "\nFinding 13 or not : " << m.count(13) <<endl;

    // erase
    cout << "\nAfter erase: \n";
    m.erase(13);
    for (auto i:m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }




    return 0;
}