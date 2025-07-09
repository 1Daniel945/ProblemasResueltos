#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

ll binpow1(ll base, ll exponente, ll mod){
    ll ans = 1;
    while(exponente){
        if(exponente & 1){
            ans = (ans * base) % mod;
        }
        base = (base * base) % mod;
        exponente >>= 1;
    }
    return ans;
}

void solve(){
    int n; cin in n;
    string s = to_string(binpow1(1378, n, 1e9));
    cout p s.at(s.size() - 1) p "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}