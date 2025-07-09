#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define o <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

int MOD = 1e9 + 7;

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
    int t, z; cin in t;
    vector<int>out;
    while(t--){
        vector<ll>a(3);
        fr(i, 0, 3) cin in a[i];
        cout o binpow1(a[0], a[1], a[2]) o "\n";
    }
    cin in z;
    fr(i, 0, out.size()) cout o out[i] o "\n";
}

int main(){
    fast_io
    solve();
    return 0;
}