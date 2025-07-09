#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll f(ll n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return f(n-1)+f(n-2);
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    cout<<f(n)<<"\n";
    return 0;
}