#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s1="",s2;
    cin>>s>>s2;
    for(int i=s.size()-1; i>=0; i--){
        s1+=s[i];
    }
    s1==s2?cout<<"YES\n":cout<<"NO\n";
    return 0;
}