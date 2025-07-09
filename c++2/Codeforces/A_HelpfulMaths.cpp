#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int>vt;
    for(int i=0; i<s.size(); ++i){
        if(s[i]!='+'){
            vt.push_back(s[i]);
        }
    }
    sort(vt.begin(), vt.end());
    string out="";
    for(auto e: vt){
        out+=(char)e;
        out+="+";
    }
    for(int i=0; i<out.size()-1; ++i){
        cout<<out[i];
    }
    cout<<"\n";
    return 0;
} 