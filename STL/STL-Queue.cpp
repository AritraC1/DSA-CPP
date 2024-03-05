// STL QUEUE

/*

*/

#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue <string> q;

    q.push("Hi");
    q.push("Hello");
    q.push("World");

    // Before Pop
    cout << "Before Pop Size = " << q.size() << endl;

    cout << "First Element = " << q.front() << endl;
    
    // After Pop
    q.pop();
    cout << "After pop size = " << q.size() << endl;
    
    cout << "After Pop First Element = " << q.front() << endl;
    
    return 0;
}