#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fast_io ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

void solve(){
    int t, n, q; cin in t;
    while(t--){
        cin in n in q;
        vector<ll>a(n), prefixSum(n);
        fr(i, 0, n) cin in a[i];
        prefixSum[0] = a[0];
        fr(i, 1, n) prefixSum[i] = prefixSum[i - 1] + a[i];
        pair<ll, ll>pp; ll x;
        fr(i, 0, q){
            cin in pp.ff in pp.ss in x;
            ll range = ((pp.ss - pp.ff) + 1) * x;
            ll ans = (prefixSum[n - 1] - (prefixSum[pp.ss - 1] - prefixSum[pp.ff - 1] + a[pp.ff - 1])) + range;
            ans % 2 == 1 ? cout p "YES\n" : cout p "NO\n";
        }
    }
}             

int main(){
    fast_io
    solve();
    return 0;
}            