#include <bits/stdc++.h>
typedef long long ll;
#define fi(x)for(int i=0; i<x; ++i)
#define fj(x)for(int j=0; j<x; ++j)
#define fir(x,n)for(int r=x-1; r>=n; --r)
#define in >>
#define p <<
#define psi(t,x) for(pair<string,int>t:x)
#define mpl(x) map<ll ,ll>x;
using namespace std;

mpl(mp);

ll f(ll n){
    if(n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    else{
        if(mp[n]==0){
            mp[n]=f(n-1)+f(n-2);
            return mp[n];
        }
        else{
            return mp[n];
        }
    }
}

int main(){
    ll n;cin in n;
    cout p f(n)p"\n";
    return 0;
}