// PRIORITY QUEUE

/*
A C++ priority queue is a type of container adapter, specifically designed such that the first element of 
the queue is either the greatest or the smallest of all elements in the queue, and elements are in 
non-increasing or non-decreasing order (hence we can see that each element of the queue has a 
priority {fixed order}).
*/

#include <iostream>
#include <queue>
using namespace std;

int main() {

    cout << "<------- Max Heap ------->\n" << endl;

    // Max Heap
    priority_queue<int> max_pq;

    max_pq.push(1);
    max_pq.push(3);
    max_pq.push(2);
    max_pq.push(0);

    cout << "Size of Max Heap : " << max_pq.size() << endl;

    int n = max_pq.size();
    for (int i = 0; i<n; i++)
    {
        cout << max_pq.top() << " ";
        max_pq.pop();
    }

    cout << endl;

    cout << "\n<------- Min Heap ------->\n" << endl;

    // Min Heap
    priority_queue<int, vector<int>, greater<int> > min_pq;

    min_pq.push(5);
    min_pq.push(1);
    min_pq.push(0);
    min_pq.push(4);
    min_pq.push(3);

    cout << "Size of Min Heap: " << min_pq.size() << endl;

    int m = min_pq.size();
    for (int i = 0; i<m; i++)
    {
        cout << min_pq.top() << " ";
        min_pq.pop();
    }

    cout << endl;
    cout << "\n";


    return 0;
}