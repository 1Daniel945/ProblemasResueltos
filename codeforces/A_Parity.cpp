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

void solve(){
    int b, k;
    cin in b in k;
    vector<int>a(k);
    fr(i, 0, k) cin in a[i];
    ll ans = 0;
    fr(i, 0, k){
        ans += a[i] * (binpow1(b, k - (i + 1)));
    }
    ans % 2 == 0 ? cout p "even\n" : cout p "odd\n";
}

int main(){
    fast_io
    solve();
    return 0;
} 