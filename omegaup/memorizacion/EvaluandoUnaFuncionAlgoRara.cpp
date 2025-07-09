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
unsigned long long mod = 18446744073709551615ULL; // 2^64
using namespace std;
 
map<pair<ll, ll>, ll>mp;


ll f(ll x, ll y){
    if(y <= 2){
        if(mp[{x, y}] == 0){
            mp[{x, y}] = x + y;
        }
        return mp[{x, y}];
    }
    if(mp[{x, y - 1}] == 0){
        mp[{x, y - 1}] = f(x, y - 1);
    }
    if(mp[{x, y - 2}] == 0){
        mp[{x, y - 2}] = f(x, y - 2);
    }
    return (x + (mp[{x, y - 1}] + 5 * mp[{x, y - 2}]));
} 

int main(){
    fastio
    ll t; cin in t;
    pair<ll, ll>pi;
    while(t--){
        cin in pi.first in pi.second;
        cout p f(pi.first, pi.second) % mod p "\n";
    }
    return 0;
}