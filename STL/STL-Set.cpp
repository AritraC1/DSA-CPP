// STL SET

/*
Sets are a type of associative container in which each element has to be unique because the value of the 
element identifies it. The values are stored in a specific sorted order i.e. either ascending or descending.
*/

#include <iostream>
#include <set>
using namespace std;

int main() {

    set<int> st;

    st.insert(5);
    st.insert(1);
    st.insert(6);
    st.insert(0);
    // Set me only unique values - repetetive values are not inserted.
    st.insert(0);
    st.insert(0);

    cout << "Printing set = ";
    // Prints in sorted order
    for (auto i:st)
    {
        cout << i << " ";
    }

    cout << endl;

    set <int>::iterator it = st.begin();
    it++;

    // Erase
    st.erase(it);

    for (auto i:st)
    {
        cout << i << " ";
    }

    cout << endl;

    // Count
    // 0 - False
    // 1 - True
    cout << "5 is present or not = " << st.count(5) << endl;
    cout << "-5 is present or not = " << st.count(-5) << endl;

    return 0;
}