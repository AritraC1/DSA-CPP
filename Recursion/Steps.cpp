// Counting Steps

#include <iostream>
using namespace std;

void reachHome(int src, int dest) {

    // For refernce
    // cout << "Source: " << src << " Destination: " << dest << endl; 

    // Base Case
    if (src == dest) {
        cout << "Reached Home" << endl;
        return ;
    }

    // Processing
    src++;

    // Recursion Call
    reachHome(src, dest);

}

int main() {

    int dest = 10;
    int src = 1;

    reachHome(src, dest);


    return 0;
}