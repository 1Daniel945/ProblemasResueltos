#include <string>
#include <iostream>
#include <stack>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char>p;
    for(int i=0; i<s.size(); i++){
        if(p.empty()){
            p.push(s[i]);
            continue;
        }
        char tope = p.top();
        if(tope == '(' && s[i]==')'){
            p.pop();
        }
        else{
            p.push(s[i]);
        }
    }

    if(p.empty()){
        cout<<"Balanceado";
    }
    else{
        cout<<"No esta balanceado";
    }

    return 0;
}
