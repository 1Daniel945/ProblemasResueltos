#include <iostream>
using namespace std;

int main(){
    int n,m,steps=0;
    cin>>n>>m;
    if(m>n){
        steps=-1;
    }
    else{
        if(n%2)
            steps=n/2+1;
        else
        steps=n/2;
        while (steps%m>0)
        steps++;
    }
    cout<<steps<<"\n";
    return 0;
}