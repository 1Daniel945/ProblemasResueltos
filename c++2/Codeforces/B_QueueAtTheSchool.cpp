#include <iostream>
#include <queue>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    char c;
    queue<char>pq;
    while (a--)
    {
        cin>>c;
        pq.push(c);
    }
    while (pq.size()>0)
    {
        cout<<pq.front()<<"\n";
        pq.pop();
    }
    return 0;
}