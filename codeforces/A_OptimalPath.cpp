#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x; i >= n; --i)
#define in >>
#define p <<
#define fast_io ios :: sync_with_stdio(0); cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
#define pb(x) push_back(x)
#define lsb(x) ((x) & -(x)) //less significative bit
#define out(i, n) (i == n - 1 ? "\n" : " ")
typedef long long ll;
typedef unsigned long long ull;
using namespace std;

void solve(){
    ll t, n, m; cin in t;
    while(t--){
        cin in n in m;
        ll s = 0;
        fr(i, 0, m) s += (i + 1);
        int x = m;
        fr(i, 2, n + 1) s += x * i;
        cout p s p "\n";
    }
}

int main(){ 
    fast_io
    solve();
    return 0;
}