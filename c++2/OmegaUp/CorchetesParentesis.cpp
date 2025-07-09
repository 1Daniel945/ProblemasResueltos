#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<char>c;
    stack<char>p;
    string s;
    bool e=false, e2=false;
    getline(cin, s);
    int tm = s.size();
    for(int i=0; i<tm; i++){
        if(s[i]=='('){
			p.push(s[i]);
            e=true;
        }
        if(!p.empty()){
            if(s[i]==')' && p.top()=='('){
                p.pop();
            }
        }
    }
    for(int i=0; i<tm; i++){
        if(s[i]=='{'){
            c.push(s[i]);
            e2=true;
        }
        if(!c.empty()){
            if(s[i]=='}' && c.top()=='{'){
                c.pop();
            }
        }
    }
    ((e && e2)&&(p.size()==0 && c.size()==0))?cout<<"SI\n":cout<<"NO\n";
    return 0;
}
