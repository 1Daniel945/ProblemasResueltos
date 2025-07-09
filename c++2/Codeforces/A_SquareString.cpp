#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n;
    string s[n];
    for(int i=0; i<n; ++i){
        cin>>s[i];
    }
    string s1="",s2="";
    for(int i=0; i<n; ++i){
        x=s[i].size();
        if(x%2==0){
            s1="";
            s2="";
            for(int j=0; j<x/2; ++j){
                s1+=s[i].at(j);
            }
            for(int j=x/2; j<s[i].size(); j++){
                s2+=s[i].at(j);
            }
            s1==s2?cout<<"YES\n":cout<<"NO\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}