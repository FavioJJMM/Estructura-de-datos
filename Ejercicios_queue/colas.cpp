#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverse(queue<int>& q) {
    stack<int> s;
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main(){
    queue<int> cola;
    cola.push(1);
    cola.push(10);
    cola.push(4);
    cola.push(11);
    cola.push(14);
    cout << "La cola original es: ";
    printQueue(cola);
    reverse(cola);
    cout << "La cola invertida es: ";
    printQueue(cola);
    return 0;
}
