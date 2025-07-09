#include <bits/stdc++.h>
#include <map>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    map<char, int>mp;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            mp[s[i]]++;
        }
    }
    int t=0;
    for(pair<char, int>p : mp){
        p.second>0?t++:t;
    }
    cout<<t<<"\n";
    return 0;
}