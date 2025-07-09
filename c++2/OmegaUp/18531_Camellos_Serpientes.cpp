#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
#define fj(x) for(int j=0; j<x; ++j)
using namespace std;

int main(){
    int n,t;
    cin>>n;
    string s[n],s1[n],s2="";
    fi(n){
        cin>>s[i];
    }
    fi(n){
        fj(s[i].size()){
            if((s[i].at(j)>=65 &&s[i].at(j)<=90)&&(j>0)){
                s2+='_';
                s2+=tolower(s[i].at(j));
            }
            else{
                s2+=tolower(s[i].at(j));
            }
        }
        s1[i]=s2;
        s2="";
    }
    for(int i=0; i<n; ++i){
        cout<<s1[i]<<"\n";
    }
    return 0;
}