#include <bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    string s;
    cin>>s;
    fi(s.size()){
        if(i+1<s.size()){
            if(s.at(i)==s.at(i+1)){
                x++;
            }
        }
    }
    cout<<x<<"\n";
    return 0;
}