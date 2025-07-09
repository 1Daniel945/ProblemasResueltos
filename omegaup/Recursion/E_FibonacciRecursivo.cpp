#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll c=0;

ll f(ll n){
    c++;
    if(n<2)return n;
    else return f(n-1)+f(n-2);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin>>n;
    cout<<f(n)<<" "<<c<<"\n";
    return 0;
}