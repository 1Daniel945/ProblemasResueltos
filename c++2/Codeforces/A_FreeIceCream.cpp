#include<bits/stdc++.h>
#define fi(x) for(int i=0; i<x; ++i)
using namespace std;

int main(){
    int n,tp,c=0;
    cin>>n>>tp;
    char s[n];
    int v[n];
    fi(n){
        cin>>s[i]>>v[i];
        if(s[i]=='+'){
            tp+=v[i];
        }
        if(s[i]=='-' && tp>=v[i]){
            tp-=v[i];
        }
        else if(s[i]=='-' && tp<v[i]){
            c++;
        }
    }
    cout<<tp<<" "<<c<<"\n";
    return 0;
}