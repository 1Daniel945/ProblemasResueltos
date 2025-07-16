#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
#define fr(i, x, n) for(int i = x; i<(int)n; ++i)
#define fi(i, x, n) for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define ff first
#define ss second
#define pb push_back
#define ac accumulate
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == (int) n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

ull lim = (ull) 2e64;
int MOD = 1e9 + 7;

ll binpow(ll base, ll exponente){
    ll ans = 1;
    while(exponente){
        if(exponente & 1){
            ans = (ans * base) % MOD;
        }
        base = (base * base) % MOD;
        exponente >>= 1;
    }
    return ans;
}

void solve(){
    ll t, a, b; cin in t;
    while(t--){
        cin in a in b;
        cout p binpow(a, b) p "\n";
    }
}

int main(){
    fast_io
    solve();
    return 0;
}  