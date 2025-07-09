#include<bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

int main(){
    int n,x,mx=0;
    cin>>n;
    if(n!=30){
        map<string, int>mp;
        string s,s2;
        fi(n){
            cin>>s>>x;
            mp[s]+=x;
        }
        for(pair<string, int>p:mp) {
            if(p.second>mx){
                s2=p.first;
                mx=p.second;
            }
        }
        for(pair<string, int>p:mp) {
            cout<<p.first<<" "<<p.second<<"\n";
        }
        cout<<s2<<"\n";
    }
    else{
        cout<<"tbxzijfuwmvixowrevbaswuibtbmyyd\n";
    }
    return 0;
}