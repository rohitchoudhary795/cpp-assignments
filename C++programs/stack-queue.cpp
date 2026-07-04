#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main() {
    cout << "=== STACK ===\n";
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.top() << "\n"; 
    s.pop();
    cout << "After pop, top: " << s.top() << "\n"; 
    cout << "Size: " << s.size() << "\n";
    cout << "Empty? " << (s.empty() ? "Yes" : "No") << "\n";
    cout << "Popping all: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n\n";
    cout << "=== QUEUE ===\n";
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front: " << q.front() << "\n"; 
    cout << "Back: " << q.back() << "\n";   
    q.pop(); 
    cout << "After pop, front: " << q.front() << "\n";
    cout << "Size: " << q.size() << "\n";
    cout << "Popping all: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n\n";
    cout << "=== PRIORITY_QUEUE (Max-Heap) ===\n";
    priority_queue<int> pq;
    pq.push(40);
    pq.push(10);
    pq.push(30);
    pq.push(20);
    cout << "Top (largest): " << pq.top() << "\n"; 
    cout << "Popping all (descending order): ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n\n";
    cout << "=== PRIORITY_QUEUE (Min-Heap) ===\n";
    priority_queue<int, vector<int>, greater<int> > minHeap;
    minHeap.push(40);
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);
    cout << "Top (smallest): " << minHeap.top() << "\n"; 
    cout << "Popping all (ascending order): ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << "\n";
    return 0;
}