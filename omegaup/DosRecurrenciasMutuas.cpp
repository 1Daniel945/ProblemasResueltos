#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i< (int) n; ++i)
#define fi(i, x, n)for(int i= (int) x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0); cin.tie(0);
typedef long long ll;
using namespace std;

map<ll, ll>mp;

ll f(ll n){
    if(n == 0) return 1;
    int x = n, y;
    if(x <= 2) y = -2;
    else{ 
        if(mp[n - 2] == 0){
            mp[n - 2] = f(n - 2);
        }
        y = mp[n - 2] - 1;
    }
    if(mp[n - 1] == 0){
        mp[n - 1] = f(n - 1);
    }
    return mp[n - 1] - y; 
}

int main(){
    fastio
    ll n; cin in n;
    cout p f(n) p "\n";
    return 0;
}