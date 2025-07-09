#include <bits/stdc++.h>
typedef long long ll;
#define fi(x) for(ll i=0; i<x; ++i)
using namespace std;

ll fibonacci(int n) {
    ll a=1,b=0,c=0;
    fi(n){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}

int main() {
    int n,x=0;
    cin>>n;
    fi(n){
        cout<<fibonacci(i)<<"\n";
    }
    cout<<x<<"\n";
    return 0;
}