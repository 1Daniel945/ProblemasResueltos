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

vector<ll>f;

ll binpow(ll base, ll exponente){
    ll ans = 1;
    fr(i, 0, 62){
        //Comprobar si el bit en la posicion i esta encendido
        if(exponente & (1 << i)){
            ans = (ans * base);
        }
        base *= base;
    }
    return ans;
}

ll binpow1(ll base, ll exponente){
    ll ans = 1;
    while(exponente){
        if(exponente & 1){
            ans = (ans * base);
        }
        base *= base;
        exponente >>= 1;
    }
    return ans;
}

//Obtner el inverso modular
ll inv(ll base){
    return binpow1(base, MOD - 2);
}

ll permutaciones(ll n, ll k){
    return f[n] * inv(f[n - k]);
}

ll combinaciones(ll n, ll k){
    return (f[n] * inv(f[n - k] * f[k] % MOD)) % MOD;
}