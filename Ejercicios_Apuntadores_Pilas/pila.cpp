#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> pila;
    pila.push(1);
    pila.push(10);
    pila.push(4);
    cout<<"El tamaño de la pila es: "<<pila.size()<<endl;
    cout<<"El elemento tope es: "<<pila.top()<<endl;
    pila.pop();
    cout<<"El nuevo elemento tope es: "<<pila.top()<<endl;

    return 0;

}