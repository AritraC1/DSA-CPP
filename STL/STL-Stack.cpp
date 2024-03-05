// STL STACK

/*
Stacks are a type of container adaptors with LIFO (Last In First Out) type of working, where a new element is 
added at one end (top) and an element is removed from that end only. 
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack <string> s;

    s.push("Hi");
    s.push("Hello");
    s.push("World");

    cout << "Top Element = " << s.top() << endl;
    
    s.pop();
    cout << "Top Element = " << s.top() << endl;
   
    cout << "Size of the stack = " << s.size() << endl;
   
    // 0 - False
    // 1 - True    
    cout << "Empty or not " << s.empty() << endl;

    return 0;
}