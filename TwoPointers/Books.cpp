#include <bits/stdc++.h>
#define fr(i, x, n)for(int i = x; i<(int)n; ++i)
#define fi(i, x, n)for(int i = (int)x - 1; i >= n; --i)
#define in >>
#define p <<
#define fp(a, b, t, x) for(pair<a, b>t : x)
#define vp(x) vector<pair<int, int>>x;
#define v(x, d) vector<d>x;
#define fastio ios::sync_with_stdio(0);cin.tie(0);
#define cAll(a, b) count(a.begin(), a.end(), b)
#define ff first
#define ss second
typedef long long ll;
using namespace std;
/*
    rango entre l y R
    r - l + 1
*/
void solve(){
    int n, t; cin in n in t;
    vector<int>a(n);
    fr(i, 0, n) cin in a[i];
    //Two pointers
    int l = 0, r = 0;
    ll s = 0, ct = 0;
    while(r < n){
        s += a[r];
        while (s > t) s -= a[l++];
        ct = max(ct, r - l + 1LL);
        r++;
    }
    cout p ct p "\n";
}

int main(){
    fastio
    solve();
    return 0;
}