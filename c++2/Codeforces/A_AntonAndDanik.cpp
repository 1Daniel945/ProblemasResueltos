#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n,d=0,a=0;
    char x;
    cin>>n;
    while (n--)
    {
        cin>>x;
        x=='A'?a++:d++;
    }
    if(a>d){
        cout<<"Anton\n";
    }
    else if(d>a){
        cout<<"Danik\n";
    }
    else{
        cout<<"Friendship\n";
    }
    return 0;
}