// STL DEQUE

/*
Deque is a data structure that inherits the properties of both queues and stacks.
*/

#include <iostream>
#include <deque>
using namespace std;

int main() {

    deque<int> d;

    d.push_back(1);
    d.push_front(2);

    for (int i:d)
    {
        cout << i << " ";
    }

    

    return 0;
}