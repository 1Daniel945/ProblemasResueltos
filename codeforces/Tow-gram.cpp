#include <bits/stdc++.h>
#define fi(x)for(int i=0; i<x; ++i)
#define in >>
#define p <<
#define psi(t,x) for(pair<string,int>t:x)
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin in n;
    string s;
    cin in s;
    map<string,int>mp;
    fi(s.size()-1){
        string s1="";
        s1=s.at(i);
        s1+=s.at(i+1);
        mp[s1]++;
    }
    int mx=0;
    string s3;
    psi(d,mp){
        if(d.second>mx){
            mx=d.second;
            s3=d.first;
        }
    }
    cout p s3 p "\n";
    return 0;
}