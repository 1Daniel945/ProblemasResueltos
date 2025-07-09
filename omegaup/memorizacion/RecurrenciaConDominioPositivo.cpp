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

//Memorizacion para evitar recalcular un resultado
map<ll, ll> mp;

ll f(ll n){
    if(abs(n) == 25)return 1;
    else if(abs(n) != 25 && n < 0){
        if(mp[n - 1] == 0){
            mp[n - 1] = f(n - 1);
        }
        if(mp[1 - n] == 0){
            mp[1 - n] = f(1 - n);
        }
        return mp[n - 1] + mp[1 - n];
    }
    else if(abs(n) != 25 && n == 0){
        if(mp[-1] == 0){
            mp[-1] = f(-1);
        }
        if(mp[1] == 0){
            mp[1] = f(1);
        }
        return mp[-1] + mp[1];
    }
    if(mp[n + 1] == 0){
        mp[n + 1] = f(n + 1);
    }
    if(mp[-n] == 0){
        mp[-n] = f(-n);
    }
    return mp[n + 1] + mp[- n];
}

int main(){
    fastio
    ll x;
    cin in x;
    cout p f(x) p "\n";
    return 0;
}