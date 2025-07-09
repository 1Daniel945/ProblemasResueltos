#include<bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

int main(){
    int t,n,p,pa,pc;cin>>t;
    string s;
    while (t--)
    {
        cin>>n;
        cin>>s;
        stack<char>pi;
        fi(s.size()){
            if(s.at(i)=='('){
                pi.push(s.at(i));
            }
            if(!pi.empty() && s.at(i)==')'){
                if(pi.top()=='('){
                    pi.pop();
                }
            }
        }
        cout<<pi.size()<<"\n";
    }
    return 0;
}
