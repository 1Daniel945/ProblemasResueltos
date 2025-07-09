#include <bits/stdc++.h>
#define fr(i, x, n)for(ll i = x; i< (ll) n; ++i)
#define fi(i, x, n)for(int i = x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;
 
map<pair<ll, ll>, ll>mp;

unsigned long long mod64 = 18446744073709551615ULL; // 2^64

ll f(ll n, ll k){
    if(n == 0) return k;
    if(mp[{n - 1, k}] == 0){
        mp[{n - 1, k}] = f(n - 1, k);
    }
    if(mp[{n - k, 1 - k}] == 0){
        mp[{n - k, 1 - k}] = f(n - k, 1 - k);
    }
    return mp[{n - 1, k}] + 2 * mp[{n - k, 1 - k}]; 
} 

int main(){
    fastio
    ll n;
    cin in n;
    cout p f(n, 0) % mod64 p "\n";
    return 0;
}