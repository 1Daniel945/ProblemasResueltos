#include <string>
#include <queue>
#include <iostream>
using namespace std;

int main(){
    queue<string>q;

    q.push("David");
    q.push("Cesar");
    q.push("Batman");

    q.pop();
    q.pop();
    //Front
    cout<<q.front()<<"\n";

    if(q.empty()){
        q.pop();
    }
    //Le da prioridad al elemento mayor
    priority_queue<int>pq;

    pq.push(5*-1);
    pq.push(2*-1);
    pq.push(1*-1);

    cout<<pq.top()*-1<<"\n";

    return 0;
}
