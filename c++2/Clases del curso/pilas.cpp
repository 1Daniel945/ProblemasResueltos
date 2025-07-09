#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int>p;
    //Agregar a la pila
    p.push(4);
    p.push(3);
    p.push(1);
    p.push(5);
    //Preguntar por el elemento top
    cout<<p.top()<<endl;
    //Eliminar valores de la pila
    p.pop();

    cout<<"Size: "<<p.size()<<"\n";

    while(!p.empty()){
        cout<<p.top()<<endl;
        p.pop();
    }

    cout<<"Size: "<<p.size()<<"\n";

    cout<<p.top()<<endl;
    return 0;

    ///No se puede usar un for each
}
