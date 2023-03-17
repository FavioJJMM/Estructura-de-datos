#include <iostream>
#include <queue>
#include <stack>
#include <set>

using namespace std;

void removeDuplicates(queue<int>& q) {
    set<int> elementosunicos;

    queue<int> temp;

    while (!q.empty()) {
        int elementoactual = q.front();
        q.pop();

        if (elementosunicos.insert(elementoactual).second) {
            temp.push(elementoactual);
        }
    }

    q = temp;
}


int main() {
    queue<int> cola;
    cola.push(1);
    cola.push(10);
    cola.push(4);
    cola.push(11);
    cola.push(14);
    cola.push(14);
    cola.push(4);
    cola.push(10);
    cola.push(5);
    cola.push(6);

    cout<<"Cola antes: "<<endl;
    queue<int> colaantes=cola;


    while (!colaantes.empty()) {
        cout << colaantes.front() << " ";
        colaantes.pop();
    }

    removeDuplicates(cola);

    cout<<endl<<"Cola despues: "<<endl;
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }

    return 0;
}
