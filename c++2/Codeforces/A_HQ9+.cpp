#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s); 
    bool v=0;
    for(int i=0; i<s.size(); ++i){
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
            v=1;
            break;
        }
    }
    v==1?cout<<"YES\n":cout<<"NO\n";
    return 0;
}